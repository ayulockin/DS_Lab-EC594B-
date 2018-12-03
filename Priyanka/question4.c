#include<stdio.h>

void transpose(int *array, int m, int n){

    int new_array[12];
    for (int i = 0; i < m; ++i )
    {
       for (int j = 0; j < n; ++j )
       {
          // Index in the original matrix.
          int index1 = i*n+j;

          // Index in the transpose matrix.
          int index2 = j*m+i;

          new_array[index2] = array[index1];
       }
    }

    for (int i=0; i<m*n; i++) {
        array[i] = new_array[i];
    }
}


void main()
{
int size,a[100],m,n,i;
printf("enter the number of rows and coloumns of the original matrix \t");
scanf("%d%d",&m,&n);

printf("enter the elements of the matrix \n");
for(i=0;i<(m*n);i++)
{
scanf("%d",&a[i]);
}

printf("the original matrix you have enetered is \n");
for(i=0;i<m*n;i++)
	{
	printf("%d ",a[i]);

	if(((i+ 1)%n)==0)
	{
		printf("\n");
	}
	
	}

printf("the transposed matrix is :\n");
transpose(a,m,n);

for(i=0;i<m*n;i++)
	{
	printf("%d ",a[i]);

	if(((i+ 1)%m)==0)
	{
		printf("\n");
	}
	

}
return (0);
}