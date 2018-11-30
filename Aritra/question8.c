#include <stdio.h>
#include <stdlib.h>
void bubble(int a[],int size){
	int i,j,hold;
	for(i=0;i<size;i++){	
		for(j=0;j<size-i-1;j++){
			if(a[j]>a[j+1]){
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			}
		}
	}
}

void mergepass(int a[],int b[],int sa,int sb){
	int total=sa+sb;
	int array[total];
	int i=0;
	int j=0;
	int counter=0;
	while(i<sa && j<sb){
		if(a[i]>b[j]){
			array[counter++]=b[j++];
		}
		else if(a[i]<b[j]){
			array[counter++]=a[i++];
		}
		else{
			array[counter++]=a[i++];
			array[counter++]=b[j++];
		}
	}
	while(i<sa){
		array[counter++]=a[i++];
	}
	while(j<sb){
		array[counter++]=b[j++]; 	
	}
	//merged
	printf("MERGED ARRAY \n");
	for(i=0;i<total;i++){
		printf("%d \n",array[i]);
	}
}
void main(){
	int i,j,hold;
	int size1,size2;
	printf("ENTER THE SIZE OF THE ARRAY1\n");
	scanf("%d",&size1);
	printf("ENTER THE SIZE OF THE ARRAY2\n");
	scanf("%d",&size2);
	int arr1[10];
	int arr2[10];	
	//input array
	printf("FOR ARRAY 1\n");
	for(i=0;i<size1;i++){
		printf("\nENTER THE ELEMENT");
		scanf("%d",&arr1[i]);
	}
	printf("FOR ARRAY 2\n");
	for(i=0;i<size2;i++){
		printf("\nENTER THE ELEMENT");
		scanf("%d",&arr2[i]);
	}
	
	bubble(arr1,size1);
	bubble(arr2,size2);
	
	printf("FOR ARRAY 1\n");
	for(i=0;i<size1;i++){
		printf("%d\n",arr1[i]);
	}
	printf("FOR ARRAY 2\n");
	for(i=0;i<size2;i++){
		printf("%d\n",arr2[i]);
	}
	
	mergepass(arr1,arr2,size1,size2);
}

