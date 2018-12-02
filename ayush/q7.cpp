// self loop

#include<stdio.h>

int main(){
	int n, m;
	printf("Enter the dimention of your matrix: (n X m)\n");
	printf("Enter the value of n: ");
	scanf("%d", &n);
	printf("Enter the value of m: ");
	scanf("%d", &m);
	
	int A_matrix[n][m];
	printf("Enter the values in the matrix of size (%d, %d)\n",n, m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d", &A_matrix[i][j]);
		}
	}
	
	printf("Your matrix is: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d\t", A_matrix[i][j]);
		}
		printf("\n");
	}	
	
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==j){
				if(A_matrix[i][j]!=0 || A_matrix[i][j]!=1){
					count = count + A_matrix[i][j]/2;
				}
			}
		}	
	}
	printf("The number of self loops in the given graph is: %d", count);
}





