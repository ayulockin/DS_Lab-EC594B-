#include <stdio.h>
#include <malloc.h>
int i;
struct node{
	int info;//this member is the information part of node
	struct node * next;//this member is the link part of node which points to the next node
	struct node * prev;//this member is the link part of node which points to the previous node
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
	newNode->next=NULL;
	newNode->prev=NULL;
	
	if(start == NULL){
		//the list is empty
		start=newNode;
	}//end of if
	else{
		struct node *temp=start;
		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next=newNode;
		newNode->prev=temp;
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
		newNode->next=start;
		start=newNode;
		newNode->prev=NULL;
	}
	else{
		for(i=0;i<index-1;i++){
			temp=temp->next;
		}
		newNode->next=temp->next;
		temp->next=newNode;
		newNode->prev=temp;
	}
}

void del(){
	int index;
	printf("ENTER THE INDEX\n");
	scanf("%d",&index);
	struct node * temp=start;
	if(index == 0){
		start=temp->next;
		temp->next->prev=NULL;
		printf("%d GONE \n",temp->info);
		free(temp);
	}
	else{
		for(i=0;i<index-1;i++){
			temp=temp->next;
		}
		struct node * hold=temp->next;
		if(hold->next==NULL){
			//last element deletion
			temp->next=NULL;
			printf("%d GONE \n",hold->info);
			free(hold);
			return;
		}
	
		temp->next=hold->next;
		hold->next->prev=temp;
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
			temp=temp->next;
		}
	printf("\n");	
}//end of display

void count(){
	int c=0;
	struct node *temp=start;
	while(temp != NULL){
		c++;
		temp=temp->next;
	}
	printf("COUNTS= %d \n",c);
}

void rev(){
	//uisng iterative method
	
	//remeber to work out the first node outside while
	//inside while, first change previous then change next
	if(start == NULL){
		return;
	}
	struct node * present=start;//present node is the starting node
	struct node * future=present->next;//fututre node is the 2nd node
	present->prev=future;//the previous link of present node points to future
	present->next=NULL;//present nodes next link points to NULL
	while(future != NULL){
		future->prev=future->next;//future's previous link points to futre's next
		future->next=present;//future's next points to present node *line 2*
		present=future;//present is the future
		future=future->prev;//the future is given the next node by assigning it the previous link see line 2
	}
	start=present;//start is given the present valuse which is the last node
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
		temp=temp->next;
	}
	return 0;
}
