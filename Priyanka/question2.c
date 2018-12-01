#include<stdio.h>
#include<stdlib.h>
int max=5;
int stack[5];
int top= - 1;

int isempty()
{
if(top== - 1)
return 1;
else
return 0;
}

int isfull()
{
if(top== (max - 1))
return 1;
else
return 0;
}

void insert(int n)
{
if(isfull())
{
printf("\n over fow!!\n");
return;
}
top++;
stack[top]=n;
printf("data pushed into  the stack successfully \n ");

}

void delete()
{
if(isempty())
{
printf("underflow!!\n");
return;
}
int x=stack[top];
printf("the data deleted is %d",x);
top--;

}

void display()
{
int i;
if(isempty())
{
printf("sorry the stack is empty !!\n");
return;
}
for(i=top;i>=0;i--)
{
printf("%d",stack[i]);
}
}

int main()
{
int n,choice;
printf("your choices are \n1.insert\n2,delete\n3.display\n4.exit\n");
while(1)
{
printf("enter your choice \n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("enter the number you want to insert \n");
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
