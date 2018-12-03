//PROGRAM FOR BINARY SEARCH ALGORITHM :)

#include<stdio.h>
#include<stdlib.h>

int main()
{
int low=0,high,flag=0,a[10],n,item,i,mid;
printf("enter the number of elements in the array \n");
scanf("%d",&n);
printf("enter the elements of the array in sorted form(assending order )\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("enter the item you want to find now \n");
scanf("%d",&item);
high=n-1;
while(low<high)
{
mid=(low+high)/2;
if(item==a[mid])
{
printf("%d is found in the position %d ",item,mid + 1);
flag=1;
break;
}
else if(item<a[mid])
{
high=mid - 1;
}
else
low=mid + 1;
}
return(0);
}
