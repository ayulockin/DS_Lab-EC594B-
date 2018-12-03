#include <stdio.h>
#include <conio.h>

void main(){
	int size1=0;
	int size2=0;
	printf("POWER OF THE FIRST POLYNOMIAL \n");
	scanf("%d",&size1);
	printf("POWER OF THE SECOND POLYNOMIAL \n");
	scanf("%d",&size2);
	int * pol1;
	int *pol2;
	int *pol3;
	int i=0;
	int max=size1>size2?size1:size2;
	int min=size1<size2?size1:size2;
	//printf("MAX %d",max);
	int size3=max;
	pol1=(int *)malloc(size1*sizeof(int));
	pol2=(int *)malloc(size2*sizeof(int));
	pol3=(int *)malloc(size3*sizeof(int));
	for(i=0;i<=size1;i++){
		printf("ENTER THE COEFF OF %d POWER\n",i);
		scanf("%d",&pol1[i]);
	}	
	
	for(i=0;i<=size2;i++){
		printf("ENTER THE COEFF OF %d POWER\n",i);
		scanf("%d",&pol2[i]);		
	}
	for(i=0;i<=size3;i++){
		if(i>min){
			if(min == size2)
				pol3[i]=pol1[i];
			else
				pol3[i]=pol2[i];	
		}
		else{
			pol3[i]=pol1[i]+pol2[i];
		}
	}
	
	for(i=0;i<=size3;i++){
		printf("%d x^ %d + ",pol3[i],i);
	}
}
