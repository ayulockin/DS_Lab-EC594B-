// binary search 

#include<stdio.h>

int binarySearch(int[], int, int);

int main(){
	int val;
	int SIZE = 10;
	int array[SIZE] = {2,3,5,7,9,12,14,23,25,30};
	printf("Enter the value you want to search: ");
	scanf("%d", &val);
	
	int result = binarySearch(array, val, SIZE);
	if(result == -1){
		printf("Cannot find value in database: \n");
	}
	else{
		printf("The desired value is at: %d", result+1);
	}
}

int binarySearch(int array[], int val, int size){
	int low=0; int hi = size-1;
	int middle;
	while(low<=hi){
		middle = (low+hi)/2;
		if(val == array[middle]){
			return middle;
		}
		else if(val<array[middle]){
			hi = middle-1;
		}
		else{
			low = middle+1;
		}
	}
	return -1;
}


