// transpose of matrix with 1-D array

#include<stdio.h>

int main(){
	int n, m;
	printf("Enter the dimention of your matrix: (n X m)\n");
	printf("Enter the value of n: ");
	scanf("%d", &n);
	printf("Enter the value of m: ");
	scanf("%d", &m);
	
	int matrix[n][m];
	int array[n*m];
	
	printf("Enter the values in the matrix of size (%d, %d)\n",n, m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	
	printf("Your matrix is: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}	
	
	// flattened array
	int k=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			array[k] = matrix[i][j];
			k++;
		}
	}
	
	k=0;
	printf("Transposed matrix is: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			matrix[j][i] = array[k];
			k++;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	
}


