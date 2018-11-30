#include <stdio.h>
#include <conio.h>
#define MAX 10
char stack[MAX];
int top=-1;
void push(char data);
char pop();
void main(){
	int choice;
	char ch[MAX];
	int i=0;
	int sizeChar=0;
	while(1){
		printf("1.PUSH THE STRING\n");
		printf("2.REVERSE THE STRING\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
			printf("ENTER THE STRING");
			scanf(" %s",ch);
			while(ch[i] != '\0' && i<MAX){
				sizeChar++;
				i++;
			}
			i=0;
			printf("SIZE %d \n",sizeChar);
			while(top<MAX && top<sizeChar){
				push(ch[i]);
				i++;
			}
			break;
		case 2:
			while(top>=0){
				printf("\n %c \n",pop());
			}
			break;
		default:
			break;
		}
		
	}
}
void push(char data){
	if(top < MAX){
		//valid push possible
		stack[++top]=data;
	}
	else{
		//overflow
		printf("FULL STACK\n");
	}
}
char pop(){
	if(top == -1){
		//EMPTY STACK
		printf("EMPTY STACK\n");
		return '\0';
	}
	else{
		return stack[top--];
	}
}
