#include <stdio.h>
struct node{
	int data;
	struct node * link;
} *start;

void main(){
	start=NULL;
	int choice;
	while(1){
		printf("1.PUSH\n");
		printf("2.POP\n");
		printf("3.DISPLAY\n");
		printf("4.QUIT\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
		}
	}
}

void push(){
	printf("INSIDE PUSH\n");
	int num;
	printf("ENTER THE ELEMENT\n");
	scanf("%d",&num);
	struct node * newNode=(struct node *)malloc(sizeof(struct node));
	newNode->data = num;
	newNode->link = start;
	start=newNode;
}

void pop(){
	printf("INSIDE POP\n");
	if(start == NULL)
	{
		//underflow
		printf("UNDERFLOW\n");
		return;
	}
	struct node * temp= start;
	printf("THE POPPED NUMBER IS %d \n",temp->data);
	start=temp->link;
	free(temp);
}

void display(){
		printf("INSIDE DISPLAY\n");
	struct node * temp= start;
	while(temp != NULL){
		printf("%d \n",temp->data);
		temp=temp->link;
	}
}
