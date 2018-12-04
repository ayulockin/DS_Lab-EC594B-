// merge sort
// divide : divide array of size n into two of size n/2 each
// conquer : sort both arrays recursively using mergesort
// combine : combine the two sorted arrays 

#include<stdio.h>

void mergeSort(int[], int, int);
void merge(int[],int,int,int);

int main(){
	int n=10;
	int array[n] = {44,99,55,33,88,77,22,11,01,66};
	printf("Your unsorted array is: \n");
	for(int i=0;i<n;i++){
		printf("%d\t", array[i]);
	}
	mergeSort(array, 0, n-1);
	printf("\nYour sorted array is: \n");
	for(int i=0;i<n;i++){
		printf("%d\t", array[i]);
	}
}

void mergeSort(int array[], int p, int r){
	if(p<r){
		int q = (p+r)/2;
		mergeSort(array, p, q);
		mergeSort(array, q+1, r);
		merge(array, p, q, r);
	}
}

void merge(int array[], int p, int q, int r){
	int b[10];
	int l1,r1,i;
	l1 = p;
	r1 = q+1;
	i=p;
	while((l1<=q)&&(r1<=r)){
		if(array[l1]<array[r1]){
			b[i] = array[l1];
			l1++;
			i++;
		}
		else{
			b[i] = array[r1];
			r1++;
			i++;
		}
	}
	while(l1<=q){
		b[i] = array[l1];
		l1++;
		i++;
	}
	while(r1<=r){
		b[i] = array[r1];
		r1++;
		i++;
	}
	
	for(i=p;i<=r;i++){
		array[i] = b[i];
	}
}

