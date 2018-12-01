// Implement a method to reverse single linked list

#include<stdio.h>
#include<stdlib.h>

struct NODE{
	int info;
	struct NODE *next;
};

typedef struct NODE list;

void createList(list *);
void displayList(list *);
list *invertList(list *);

int main(){
	list *node;
	node = (list *)malloc(sizeof(list));
	printf("First create your list ....................../\n");
	createList(node);
	printf("Your linked list is: \n");
	displayList(node);
	printf("Inverted linked list: \n");
	node = invertList(node);
	displayList(node);
}

void createList(list *node){
	list *curr;
	char ch;
	int i = 1;
	printf("Enter the value of %d node: ", i);
	scanf("%d", &node->info);
	node->next = NULL;
	printf("Enter 'y' to continue | 'n' to quit: ");
	fflush(stdin);
	ch = getchar();
	i++;
	while(ch!='n'){
		curr = (list *)malloc(sizeof(list));
		printf("Enter the value of %d node: ", i);
		scanf("%d", &curr->info);
		node->next = curr;
		curr->next = NULL;
		node = curr;
		printf("Enter 'y' to continue | 'n' to quit: ");
		fflush(stdin);
		ch = getchar();
		i++;	
	}
}

list *invertList(list *node){
	list *curr = node;
	list *prev = NULL;
	list *after_curr = NULL;
	
	while(curr!=NULL){
		after_curr = curr->next;
		curr->next = prev;
		prev = curr;
		curr = after_curr;
	}
	
	node = prev;
	return(node);
}



void displayList(list *node){
	list *temp = node;
	while(temp!=NULL){
		printf("%d\t", temp->info);
		temp = temp->next;
	}
	printf("\n");
}
