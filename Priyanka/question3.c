#include<stdio.h>

int max=5;
int queue[5];
int front=0,rear= - 1;
int isempty()
{
if(rear<front)
return 1;
else
return 0;
}

int isfull()
{
if(rear==(max - 1))
return 1;
else
return 0;
}

void insert(int n)
{
if(isfull())
{
printf("sorry overflow!!");
return;
}
rear++;
queue[rear]=n;
printf("\nelement successfully pushed into the stack \n");
}

void delete()
{
if(isempty())
{
printf("\n sorry underflow \n");
return;
}
int x=queue[front];
printf("the element deleted is %d",x);
front--;
}

void display()
{
if(isempty())
{
printf("the queue is empty nothing to display \n");
return;
}
int i;
for(i=front;i<=rear;i++)
{
printf("%d",queue[i]);
}
}

int main()
{
int choice,n;
printf("\n your choices are 1.insert.\n2,delete\n3.display\n4.exit\n");
while(1)
{
printf("please enter your choice \t");
scanf("%d",&choice);
switch(choice)
{
case 1:
	printf("enter the number you want to psuh \t");
	scanf("%d",&n);
	insert(n);
	break;
case 2:
	delete();
	break;
case 3:
	display();
	break;
case 4:
	exit(0);
	break;
default:
	printf("sorry wrong input ");
}
}
return(0);
}

