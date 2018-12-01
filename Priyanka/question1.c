#include<stdio.h>

#include<stdlib.h>


int main()

{

    int a[10],n,i;

    int *p[10];

     p[10]=&a[10];

    a[0]=0;

    p[0]=&a[0];

    a[1]=1;

    p[1]=&a[1];

    
    printf("enter the nth position of fibonacci series \t");

    scanf("%d",&n);

    
    for(i=2;i<=n;i++)

    {

        a[i]=a[i-2]+a[i-1];

        p[i]=&a[i];

    }

    printf("the fibonacci series upto %dth term is \n",n);

    for(i=0;i<n;i++)

    {

        printf("%d\t",*p[i]);

    }

    
    printf("\nthe address of each element is \n ");

    for(i=0;i<n;i++)

    {

        printf("%x ",p[i]);

    }

    
    return 0;

}


