#include<stdio.h>
#include<stdlib.h>

struct node
{
struct node* link;
int data;
}*head=NULL;

void create(int n)
{
struct node*newnode;
int i;
for(i=0;i<n;i++)
{
printf("enter the data of node %d\t",i+ 1);
newnode=(struct node*)malloc(sizeof(struct node));
scanf("%d",&newnode->data);
newnode->link=NULL;

if(head==NULL)
{head=newnode;
}

else
{
struct node*temp;
temp=head;
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=newnode;
}
}
printf("linked list successfully created !!\n");

}

void display()
{
struct node*temp;
temp=head;
printf("your linked list is \n");
while(temp!=NULL)
{
printf("%d==>",temp->data);
temp=temp->link;
}
printf("//");
}

void reverse()
{
struct node*current=head,*previous=NULL,*next=NULL;
while(current!=NULL)
{
next=current->link;
current->link=previous;
previous=current;
current=next;
}
head=previous;

printf("your linked list is successfully reversed \n");
}

void main()
{
int n,choice;
printf("enter the number you elements you want in your singlylinked list \n");
scanf("%d",&n);
create(n);

printf("your choises are \n1.display\n2.reverse\n3.exit\n");
while(1)
{
printf("\nenter your choice :) \n");
scanf("%d",&choice);

if(choice==1)
{
display();
}
if(choice==2)
reverse();

if(choice==3)
exit(0);

}
}



