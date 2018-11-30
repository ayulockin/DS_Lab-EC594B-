#include <stdio.h>
#include <conio.h>
#define MAX 10
void main(){
	int arr[MAX];
	arr[0]=0;
	arr[1]=1;
	int i=0;
	for(i=1;i<MAX-1;i++){
		arr[i+1]=arr[i-1]+arr[i];
	}
	//SIMPLE APPROACH
	int * pointer=arr;
	for(i=0;i<MAX;i++){
		printf("ADDRESS:%d VALUE:",pointer);
		printf("%d\n",*pointer);
		pointer+=1;
	}
	printf("\n \n");
	//ANOTHER APPROACH
	pointer=arr;
	int counter=0;
	while(counter<MAX){
		printf("ADDRESS:%d VALUE:",pointer);
		printf("%d\n",*pointer);
		pointer+=1;
		counter++;
	}
}
