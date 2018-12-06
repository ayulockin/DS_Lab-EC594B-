/*Q14 Representation polynomials using Array/Linked List and perform polynomials addition
      ##Used Linked list here##*/
#include<stdio.h>
#include<stdlib.h>
struct exp{
    int coeff;
    int pow;
    struct exp* link;
}*head1, *head2, *head3;
typedef struct exp node;
node* add(int coef,int ex,node *head)
{
    node *nt=(node *)malloc(sizeof(node));
    nt->coeff=coef;
    nt->pow=ex;
    nt->link=NULL;
    if(head==NULL)
        head=nt;
    else
    {
        node *ptr=head;
        while(ptr->link!=NULL)
        {
            if(ptr->pow==ex)
            {
                ptr->coeff=ptr->coeff+coef;
                free(nt);
                return head;
            }
            ptr=ptr->link;
        }
        ptr->link=nt;
    }
    return head;
}
node* createEXP(node *start)
{
    char check='Y';
    node *term,*ptr;
    int coef,ex;
    do{
        printf("Coefficient: ");
        scanf("%d",&coef);
        printf("Power: ");
        scanf("%d",&ex);
        if(coef!=0)
            start=add(coef,ex,start);
        printf("Add more terms?(N for NO): ");
        fflush(stdin);
        check=getchar();
    }while(check!='N'&&check!='n');
    return start;
}
void display(node *head)
{
    node *tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->pow==0)
            printf("%d ",tmp->coeff);
        else
            printf("%d x^%d ",tmp->coeff,tmp->pow);
        tmp=tmp->link;
        if(tmp==NULL)
            printf("\n");
        else
            printf("+");
    }
}
node* addEXP(node *tmp1,node *tmp2)
{
    node *tmp3=NULL;
    while(tmp1!=NULL&&tmp2!=NULL)
    {
        if(tmp2->pow < tmp1->pow)
        {
            tmp3=add(tmp1->coeff,tmp1->pow,tmp3);
            tmp1=tmp1->link;
        }
        else if(tmp2->pow > tmp1->pow)
        {
            tmp3=add(tmp2->coeff,tmp2->pow,tmp3);
            tmp2=tmp2->link;
        }
        else if(tmp2->pow==tmp1->pow)
        {
            tmp3=add(tmp2->coeff+tmp1->coeff,tmp1->pow,tmp3);
            tmp1=tmp1->link;
            tmp2=tmp2->link;
        }
    }
    while(tmp1!=NULL)
    {
        tmp3=add(tmp1->coeff,tmp1->pow,tmp3);
        tmp1=tmp1->link;
    }
    while(tmp2!=NULL)
    {
        tmp3=add(tmp2->coeff,tmp2->pow,tmp3);
        tmp2=tmp2->link;
    }
    return tmp3;
}
void main()
{
    head1=NULL;
    head2=NULL;
    head3=NULL;
    printf("--Addition of expressions by linked list--\n1st Expression:\n");
    head1=createEXP(head1);
    printf("\n2nd Expression:\n");
    head2=createEXP(head2);
    printf("\nGiven Expressions:\n\t");
    display(head1);
    printf("\t");
    display(head2);
    head3=addEXP(head1,head2);
    printf("\nThe Result is: ");
    display(head3);
}
