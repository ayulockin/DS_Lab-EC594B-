#include<stdio.h>

#include<stdlib.h>

 

void main()

{

    int i,j,a[50][50],n;

    int choice;

    int count=0;

    
    printf("enter the number of vertices\n");

    scanf("%d",&n);

    printf("\nyou will be asked if the corresponding vertices are connected or not");

    printf("\nIf the vertices are connected enter \t1");

    printf("if the vertices are not conneted enter \t0");

    printf("note that for undirected graph the graph will be symmetrix ");

    //symmetrix mean adj[2][3]=adj[3][2]=1

    //for directed graph adj[2][3]=1 means edge is directed from 2 to 3

    //not from 3 to 2

    for(i=0;i<n;i++)

    {

        for(j=0;j<n;j++)

        {

            printf("\n Is vertex[%d] and vertex[%d] are connected ?\n",i,j);

            scanf("%d",&a[i][j]);

        }

    }

    
    printf("\n THE ADJACENCY MATRIX REPRESENTATION OF THE GIVEN GRAPH IS \n");

    for(i=0;i<n;i++)

    {

        for(j=0;j<n;j++)

        {

            //("\n Is vertex[%d] and vertex[%d] are connected ?\n",i,j);

            printf("%d",a[i][j]);

        }

        printf("\n");

    }

    
    printf("Want to know number of self loops present in the graph ?\n1.YES\n2.NO\n");

    scanf("%d",&choice);

    if(choice== 1)

    {

    printf("the number of self loops in the given graph is \n");

    
    for(i=0;i<n;i++)

    {

        for(j=0;j<n;j++)

        {

            if(i==j)

            {

                if(a[i][j]== 1)

                count++;

            }

        }

    }

    
printf("%d",count);
   
}

else

exit(0);

}
