// hashing function

#include<stdio.h>

//int hashTable[10] ={15, 11, 25, 16, 9, 8, 12};
int hashTable[10];
int hashFn(int);

int main(){
	for(int i=0;i<10;i++){
		hashTable[i] == 0;
	}
}

int hashFn(int k){
	return (k%7)+1;
}

int linearProbe(k, status){
	int flag = false, i;
	int index = hashFn(k);
	if(k==hashTable[index]){
		return(index);
	}
	else{
		index++;
	}
	while(!flag){
		if(hashTable[index] == 0){
			if(status){
				hashTable[index] = k;
				flag = true;
			}
		}
		else{
			
		}	
	
	}
}

