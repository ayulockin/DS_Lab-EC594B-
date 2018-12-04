/*Q17   Implement a method to reverse a single linked list.
        ##used another linked list to copy the data in reversed order##*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*orig,*rev;
void addend(int info)
{
    struct node *np=(struct node*)malloc(sizeof(struct node));
    np->data=info;
    if(orig==NULL)
        orig=np;
    else
    {
        struct node* ptr=orig;
        while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->next=np;
    }
    np->next=NULL;
    return;
}
void addbeg(int info)
{
    struct node* nb=(struct node*)malloc(sizeof(struct node));
    nb->data=info;
    nb->next=NULL;
    if(rev==NULL)
        rev=nb;
    else
    {
        nb->next=rev;
        rev=nb;
    }
    return;
}
void reverse(struct node* source)
{
    struct node* count=source;
    while(count!=NULL)
    {
        addbeg(count->data);
        count=count->next;
    }
    return;
}
void print(struct node* head)
{
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ->",ptr->data);
        ptr=ptr->next;
    }
    printf("---");
    return;
}
int main()
{
    orig=NULL;
    rev=NULL;
    char ch='Y';
    int n;
    printf("--Reversing a single linked list--\n");
    while(1)
    {
        printf("Enter data(-1 to reverse and exit): ");
        scanf("%d",&n);
        if(n==-1)
        break;
        addend(n);
    }
    reverse(orig);
    printf("The reversed list is:\n");
    print(rev);
    return 0;
}
