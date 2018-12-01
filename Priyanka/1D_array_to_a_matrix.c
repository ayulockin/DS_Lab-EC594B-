#include<stdio.h>

int main()

{

    int a[100]={1,2,3,4,5,6,7,8,9};

    int i;

    for(i=0;i<9;i++)

    {	
	//print the first element of every coloumn
 
        printf("%d ",a[i]);

	//example(1%3==1, 2%3==2)
     
    if(((i+ 1)%3)==0)

         {

	//when(3%3==0, 6%3==0, 9%3==0) it will print one enter
            printf("\n");

         }

   }

    return(0);

}
