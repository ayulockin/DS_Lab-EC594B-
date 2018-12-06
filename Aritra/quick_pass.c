#include <stdio.h>
#include <stdbool.h>
#define MAX 20
int arr[MAX];

void main(){
	printf("ENTER THE SIZE OF THE ARRAY \n");
	int size;
	scanf("%d",&size);
	printf("ENTER THE ELEMENTS \n");
	int i;
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("ARRAY BEFORE\n");
	for(i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
	
	//quick sort one pass
	int left=0;
	int right=size-1;
	int pivot=0;//we need to assume the 1st position as said
	int temp=0;
	bool placed=false;
	while(!placed){
		//traverse form right to left
		while(arr[pivot]<arr[right] && pivot != right){
			right--;
		}
		if(right == pivot){
			placed=true;
		}
		if(arr[pivot]>arr[right]){
			temp=arr[right];
			arr[right]=arr[pivot];
			arr[pivot]=temp;
			pivot=right;
		}
		while(arr[pivot]>arr[left] && pivot != right){
			left++;
		}
		if(left == pivot){
			placed=true;
		}
		if(arr[pivot]<arr[left]){
			temp=arr[left];
			arr[left]=arr[pivot];
			arr[pivot]=temp;
			pivot=right;
		}
		
	}	
	
	printf("ARRAY AFTER\n");
	for(i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
	
}
