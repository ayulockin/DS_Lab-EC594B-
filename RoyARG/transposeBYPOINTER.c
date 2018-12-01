#include<stdio.h>
#include<stdlib.h>
void main()
{
    int row,col;
    printf("Enter rows: ");
    scanf("%d",&row);
    printf("Enter columns: ");
    scanf("%d",&col);
    int size=row*col;
    int *mat=(int *)malloc(size*sizeof(int));           //given matrix, dynamic 1D array
    int *trans=(int *)malloc(size*sizeof(int));         //transpose matrix, dynamic 1D array
    printf("Enter elements:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",( mat+ (col*i+j) ) );             //'j' changes in the inner loop, 'i' changes in the outer loop in multiples of 'col'
        }
    }
    printf("The given matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",*( mat+ (col*i+j) ) );          //same logic as above
        }
        printf("\n");
    }
    int k=0;                                            //index variable of 'trans' array
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            *(trans+k)=*( mat+ (j*col+i) );              //'row' and 'col' are interchanged to pick the elements in TRANSPOSED ORDER
            k++;
        }
    }
    printf("The transpose:\n");
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d ",*( trans+ (row*i+j) ) );       /*'row' and 'col' are interchanged only to print the 1D array in transposed manner
                                                       the 'trans' already has the elements in transposed way*/
        }
        printf("\n");
    }
}
