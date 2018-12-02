#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

int queue[SIZE];
int front = 0;
int rear = -1;

// functions

void push(int);
int pop();
void display();
int isFull();
int isEmpty();

int main(){
	int x;
	int ch = 1;
	
	while(ch!=4){
		printf("\n 1->push");
		printf("\n 2->pop");
		printf("\n 3->display");
		printf("\n 4->quit");
		
		printf("\nEnter your choice: \n");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				printf("Enter the value to be pushed\n");
				scanf("%d", &x);
				push(x);
				break;
				
			case 2:
				x = pop();
				printf("The poped value is: %d\n", x);			
				break;
				
			case 3:
				display();
				break;
				
			case 4:
				break;
			default:
				printf("wrong choice!!! try again ^_^");
		}	
	}
}

int isFull(){
	if(rear == SIZE-1){
		return 1;
	}
}
int isEmpty(){
	if(rear < front){
		return 1;
	}
}

void push(int value){
	rear++;
	queue[rear] = value;
}

int pop(){
	int temp = queue[front];
	front++;
	return temp;
}

void display(){
	int temp = rear;
	if(isEmpty()){
		printf("Empty queue\n");
	}
	for(int i=front;i<=temp;i++){
		printf("%d\t", queue[i]);	
	}
}








