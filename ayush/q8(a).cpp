// bubble sort

#include<stdio.h>

void bubblesort(int[], int);

int main(){
	int array[8] = {44,55,33,88,77,22,11,66};
	printf("Your unsorted array is: \n");
	for(int i=0;i<8;i++){
		printf("%d\t", array[i]);
	}
	bubblesort(array, 8);
	printf("\nYour sorted array is: \n");
	for(int i=0;i<8;i++){
		printf("%d\t", array[i]);
	}
}

void bubblesort(int array[], int n){
	int pass=0, i,j=0;
	for(pass=0;pass<n-1;pass++){
		for(i=0;i<n-pass-1;i++){
			if(array[i]>array[i+1]){
				int temp = array[i+1];
				array[i+1] = array[i];
				array[i] = temp;
			}
		}
	}
}


