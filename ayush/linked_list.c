#include <stdio.h>
#include <malloc.h>
int i;
struct node{
	int info;//this member is the information part of node
	struct node * link;//this member is the link part of node
} *start;
//the structure has been made
//start is a pointer variable created
//which can only point to a structure type data
void main(){
	start=NULL;
	while(1){
		int choice,number_nodes,data;
		printf("1.CREATE LIST\n");
		printf("2.ADD\n");
		printf("3.DELETE\n");
		printf("4.DISPLAY\n");
		printf("5.COUNT\n");
		printf("6.REVERSE\n");
		printf("7.SEARCH\n");
		printf("8.QUIT\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("ENTER NUMBER OF NODES\n");
				scanf("%d",&number_nodes);
				for(i=0;i<number_nodes;i++){
					printf("ENTER DATA\n");
					scanf("%d",&data);
					create_list(data);
				}
				break;
			case 2:
				addition();
				break;
			case 3:
				del();
				break;
			case 4:
				display();
				break;
			case 5:
				count();
				break;	
			case 6:
				rev();
				break;
			case 7:
				if(search() == 1){
					printf("FOUND \n");
				}
				else{
					printf("NOT FOUND \n");
				}
				break;
			case 8:
				printf("PROGRAM TERMINATED\n");
				exit(0);
				break;
											
		}//end of switch	
	}//end of while
}//end of void

void create_list(int data){
	struct node* newNode=(struct node *)malloc(sizeof(struct node));
	newNode->info=data;
	newNode->link=NULL;
	if(start == NULL){
		//the list is empty
		start=newNode;
	}//end of if
	else{
		struct node *temp=start;
		while(temp->link != NULL){
			temp=temp->link;
		}
		temp->link=newNode;
	}//end of else
}//end of create_list

void addition(){
	int index,data;
	struct node* newNode=(struct node *)malloc(sizeof(struct node));
	printf("ENTER THE INDEX\n");
	scanf("%d",&index);
	printf("ENTER THE DATA\n");
	scanf("%d",&data);
	newNode->info=data;
	struct node * temp=start;
	if(index == 0){
		newNode->link=start;
		start=newNode;
	}
	else{
		for(i=0;i<index-1;i++){
			temp=temp->link;
		}
		newNode->link=temp->link;
		temp->link=newNode;
	}
}

void del(){
	int index;
	printf("ENTER THE INDEX\n");
	scanf("%d",&index);
	struct node * temp=start;
	if(index == 0){
		start=temp->link;
		printf("%d GONE \n",temp->info);
		free(temp);
	}
	else{
		for(i=0;i<index-1;i++){
			printf("hello\n");
			temp=temp->link;
		}
		struct node * hold=temp->link;
		temp->link=temp->link->link;
		printf("%d GONE \n",hold->info);
		free(hold);
	}	
}

void display(){

	if(start == NULL){
		printf("LIST IS EMPTY\n");
		return;
	}
	struct node *temp=start;	
	while(temp != NULL){
			printf("%d ->",temp->info);
			temp=temp->link;
		}
	printf("\n");	
}//end of display

void count(){
	int c=0;
	struct node *temp=start;
	while(temp != NULL){
		c++;
		temp=temp->link;
	}
	printf("COUNTS= %d \n",c);
}

void rev(){
	//uisng iterative method
	if(start == NULL){
		return;
	}
	struct node * prev=NULL;
	struct node * pres=start;
	struct node * next;
	while(pres != NULL){
		next=pres->link;
		pres->link=prev;
		prev=pres;
		pres=next;
	}
	start=prev;
	
}

int search(){
	printf("ENTER  A NUMBER \n");
	int number;
	scanf("%d",&number);
	struct node * temp=start;
	while(temp != NULL){
		if(temp->info == number){
			return 1;
		}
		temp=temp->link;
	}
	return 0;
}
