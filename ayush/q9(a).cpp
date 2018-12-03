// insertion sort

#include<stdio.h>

void insertionsort(int[], int);

int main(){
	int array[8] = {44,55,33,88,77,22,11,66};
	printf("Your unsorted array is: \n");
	for(int i=0;i<8;i++){
		printf("%d\t", array[i]);
	}
	insertionsort(array, 8);
	printf("\nYour sorted array is: \n");
	for(int i=0;i<8;i++){
		printf("%d\t", array[i]);
	}
}

void insertionsort(int array[], int n){
	int i,j,key=0;
	for(j=1;j<n;j++){
		key = array[j];
		i = j-1;
		while((i>-1) && (array[i]>key)){
			array[i+1] = array[i];
			i--;
		}
		array[i+1] = key;
	}
}



