// q10

#include<stdio.h>

int main(){
	int array[10] = {10,9,8,7,6,5,4,3,2,1};
	int size_array = 10;
	int i = -1, j = size_array+1;
	int pivot = 0;
	
	while(1){
		do{
			i++;
		}while(array[i]<array[pivot]);
		do{
			j--;
		}while(array[j]>array[pivot]);
		if(j>i){
			printf("Cant find it's position\n");
			break;
		}
	}
	
	printf("The final position of pivot is: %d", j);
}








