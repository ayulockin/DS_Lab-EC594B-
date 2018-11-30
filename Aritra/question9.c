#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int arr[MAX];

void insertion(int size){
	int i,j,hold;
	//sorting algorithm
	for(i=1;i<size;i++){
		hold=arr[i];
		j=i-1;
		while(j>-1 && arr[j]>hold){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=hold;
	}
}

void selection(int size){
	int i,j,temp;
	//sorting part
	for(i=0;i<size;i++){
		//temporary storage hold variable
		for(j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void main(){
	int i,j,hold;

	int size;
	printf("ENTER THE SIZE OF THE ARRAY\n");
	scanf("%d",&size);
	//input array
	for(i=0;i<size;i++){
		printf("\nENTER THE ELEMENT");
		scanf("%d",&arr[i]);
	}

	int choice;
	printf("1:INSERION\n");
	printf("2:SELECTION\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			insertion(size);
			break;
		case 2:
			selection(size);
			break;	
	}
	for(i=0;i<size;i++){
		printf("\n%d",arr[i]);
	}
}
