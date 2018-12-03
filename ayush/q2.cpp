#include<stdio.h>
#include<string.h>

#define SIZE 100
#define ch_SIZE 50


char ch[50];
int stack[SIZE];
int top = -1;
//functions

void push(int);
char pop();
void display();
int isFull();
int isEmpty();

void reverseString();

int main(){
	printf("Enter the string you want to reverse: ");
	scanf("%[^\n]s", &ch);
	
	reverseString();
}

void reverseString(){
	int count = strlen(ch);
//	printf("%d\n", count);
	for(int i=0;i<count;i++){
		push(ch[i]);
	}
//	display();
	for(int i=0;i<count+1;i++){
		printf("%c", pop());
		
	}
}

int isEmpty(){
	if(top==-1){return 1;}
}
int isFull(){
	if(top==SIZE-1){return 1;}
}

void push(int value){
	top++;
	stack[top] = value;
}

char pop(){
	char temp = stack[top];
	top--;
	return temp;
}

void display(){
	int temp = top;
	while(temp!=-1){
		printf("%c\t", stack[temp]);
		temp--;
	}
	printf("\n");
}
