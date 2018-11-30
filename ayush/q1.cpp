#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int fibonacci(int);

int main(){
	int num, i=0;
	// pointer to array
	int *ptr;
	int array[SIZE]; // array defined
	printf("Enter the length of your Fibonacci Series: ");
	scanf("%d", &num);
	for(i=0;i<num;i++){
		array[i] = fibonacci(i);
	}
	ptr = array;
	printf("Fibonacci sequence: \n");
	for(i=0;i<num;i++){
		printf("%d\t", *ptr);
		ptr++;
	}
	ptr = array;
	printf("\n");
	printf("Fibonacci sequence address: \n");
	for(i=0;i<num;i++){
		printf("%5d\t", ptr);
		ptr++;
	}
}

int fibonacci(int n){
	if(n==0){
		return 0;
	}	
	else if(n==1){
		return 1;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}





