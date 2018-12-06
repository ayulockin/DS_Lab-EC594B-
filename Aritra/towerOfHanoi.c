#include <stdio.h>

void toh(int n, char source, char temp, char destination){
	
	if(n>0){
		toh(n-1,source,destination,temp); //n-1 from source to temp
		printf("%d DISK: %c to %c\n",n,source,destination); //the one left from source to destination
		toh(n-1,temp,source,destination); //n-1 form temp to destination
	}
}

void main(){
	toh(5,'A','B','C');
}
