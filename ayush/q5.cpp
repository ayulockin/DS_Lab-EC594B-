// cicrular queueusing array

#include<stdio.h>
#define SIZE 100
int queue[SIZE];
int front = -1;
int rear = -1;

// functions
void insert(int);
int Delete();
void display();
int isFull();
int isEmpty(); 

int main(){
	int x;
	int ch = 1;
	
	while(ch!=4){
		printf("\n 1->insert");
		printf("\n 2->delete");
		printf("\n 3->display");
		printf("\n 4->quit");
		
		printf("\nEnter your choice: \n");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				printf("Enter the value to be inserted\n");
				scanf("%d", &x);
				insert(x);
				break;
				
			case 2:
				x = Delete();
				printf("The deleted value is: %d\n", x);			
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

int isEmpty(){
	if(front==-1){return 1;}
	else{return 0;}
}

int isFull(){
	if(front == (rear+1)%SIZE){return 1;}
	else{return 0;}
}

void insert(int value){
	if(isFull()){
		printf("OVERFLOW");
		return;
	}
	if(front==-1){
		front = 0;
		rear = 0;
	}
	else{
		rear = (rear+1)%SIZE;
	}
	queue[rear] = value;
}

int Delete(){
	if(isEmpty()){
		printf("UNDERFLOW\n");
		return 0;
	}
	int temp = queue[front];
	if(front == rear){
		front = -1;
		rear = -1;
	}
	else{
		front = (front+1)%SIZE;
	}
	return temp;
}

void display(){
	printf("Your queue is:\n");
	if(front<=rear){
		for(int i=front;i<=rear;i++){
			printf("%d\t", queue[i]);
		}
	}
	else{
		for(int i=front;i<=SIZE-1;i++){
			printf("%d\t", queue[i]);
		}
		for(int i=0;i<=rear;i++){
			printf("%d\t", queue[i]);
		}
	}
}

