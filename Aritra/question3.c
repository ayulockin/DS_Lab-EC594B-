#include <stdio.h>
#include <conio.h>
#define MAX 10
char queue[MAX];
int front=-1;
int rear=-1;
void insert(int data);
void del();	
void sort();
void search();
void main(){
	int choice;
	int d;
	int ele;
	while(1){
		printf("1.INSERT\n");
		printf("2.DELETE\n");
		printf("3.BINARY SEARCH\n");
		printf("4.EXIT\n");
		scanf("%d",&choice);
		switch(choice){
		case 1:
			printf("ENTER NUMBER\n");
			scanf("%d",&d);
			insert(d);	
			break;
		case 2:
			del();
			break;
		case 3:
			printf("ENTER THE ELEMENT TO BE SEARCHED\n");
			scanf("%d",&ele);
			search(ele);
			break;
		case 4:
			exit(0);	
		default:
			printf("AM I A JOKE TO YOU?\n");
			break;
		}
		
	}
}
void insert(int data){
	if(front == rear && front == -1){
		//first element
		queue[++rear]=data;
		front=0;
	}
	else if(rear < MAX){
		queue[++rear]=data;
	}
	else{
		//full queue
		printf("QUEUE FULL\n");
	}
}
void del(){
	if(front == -1 || front>rear){
		//empty queue
		printf("QUEUE EMPTY\n");
	}
	else{
		printf("%d IS DELETED\n",queue[front++]);
	}
}
void search(int ele){
	sort();
	int flag=0;
	int mid;
	int l=front;
	int u=rear;
	while(l <= u){
		mid=(l+u)/2;
		if(ele < queue[mid]){
			l=mid+1;			
		}
		else if(ele > queue[mid]){
			u=mid-1;
		}
		else{
			flag=1;
			printf("FOUND NIGGER !!\n");
			break;
		}
	}
	if(flag == 0){
		printf("NOPE!!\n");
	}
}
void sort(){
	int i=front;
	int j=0;
	int temp=0;
	for(;i<rear;i++){
		for(j=0;j<i-1;j++){
			if(queue[j]>queue[j+1]){
				temp=queue[j];
				queue[j]=queue[j+1];
				queue[j+1]=temp;	
			}
		}
	}
}
