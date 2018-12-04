/*Q10   Given a set of unsorted numbers. Consider the 1st number as pivot element
        and find its final position if the list were sorted.*/
#include<stdio.h>
#define MAX 10
int pivot(int *arr,int high,int pt)
{
    int i=1,j=high-1,tmp;
    while(i<=j)
    {
        while(arr[i]<pt)
            i++;
        while(arr[j]>pt)
            j--;
        if(i<j)
        {
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
            i++;
            j--;
        }
        else
            i++;
    }
    return j+1;
}
int main()
{
	int array[10];
	printf("Enter elements\n");
	for(int i=0;i<MAX;i++)
        scanf("%d",&array[i]);
    printf("The final position of pivot is: %d", pivot(array,MAX,array[0]));
    return 0;
}
