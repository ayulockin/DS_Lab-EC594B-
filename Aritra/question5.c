#include<stdio.h>
#include <stdio.h>
#define MAX 10
int arr[MAX];
//here we need front and rear
//front leaves while rear adds
int front=-1;
int rear=-1;
void main(){
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
	if((front == 0 && rear == (MAX-1))||(front - rear == 1)){
		//OVERFLOW
		printf("OVERFLOW\n");
		return;
	}
	else {
		if(front == -1){
			front = 0;
		}
		printf("ENTER A NUMBER\n");
		scanf("%d",&num);
		rear=(rear+1)%MAX;
		arr[rear]=num;
	}
		
}

void pop(){
	printf("INSIDE POP\n");
	if(front == -1){
		//empty queue
		printf("QUEUE UNDEFLOW\n");
		return;
	}
	printf("DELETED NUMBER %d \n",arr[front]);
	if(front == rear){
		//queue has only one element
		front = -1;
		rear = -1;
	}
	else{
		front = (front+1)%MAX;
	}
}

void display(){
	printf("INSIDE DISPLAY\n");
	int i;
	if(front == -1){
		printf("EMPTY\n");
		return;
	}
	if(front < rear){
		for(i=front;i<=rear;i++){
			printf("%d\n",arr[i]);
		}
	}
	else{
		for(i=front;i<MAX;i++){
			printf("%d\n",arr[i]);
		}
		for(i=0;i<=rear;i++){
			printf("%d\n",arr[i]);
		}
	}
}
