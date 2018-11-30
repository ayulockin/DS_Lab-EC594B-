#include <stdio.h>
#include <conio.h>
void main(){
	int array[100];
	int transpose[100];
	printf("ENTER ROWS\n");
	int row;
	scanf("%d",&row);
	printf("ENTER COLS\n");
	int col;
	scanf("%d",&col);
	
	int size=row*col;
	int i=0;
	int j=0;
	printf("ENTER ARRAY\n");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	printf("BEFORE\n");
	for(i=0;i<size;i++){
		if((i+1)%(col) == 0)
		printf("%d \n",array[i]);
		else
		printf("%d ",array[i]);
	}
	printf("\n");
	
	int c=0;	
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
			transpose[c++]=array[j*col+i];
		}
	}
	
	printf("AFTER\n");
	for(i=0;i<size;i++){
		if((i+1)%(row) == 0)
		printf("%d \n",transpose[i]);
		else
		printf("%d ",transpose[i]);
	}
	printf("\n");
}
