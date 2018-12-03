// selection sort
#include<stdio.h>

void selectionsort(int[], int);

int main(){
	int array[8] = {44,55,33,88,77,22,11,66};
	printf("Your unsorted array is: \n");
	for(int i=0;i<8;i++){
		printf("%d\t", array[i]);
	}
	selectionsort(array, 8);
	printf("\nYour sorted array is: \n");
	for(int i=0;i<8;i++){
		printf("%d\t", array[i]);
	}
}

void selectionsort(int array[], int n){
	int i,j,pos,large;
	for(i=n-1;i>0;i--){
		large = array[0];
		pos = 0;
		for(j=1;j<=i;j++){
			if(array[j]>large){
				large = array[j];
				pos = j;
			}
		}
		array[pos] = array[i];
		array[i] = large;
	}
	
	
}


