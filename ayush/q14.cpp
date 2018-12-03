// polynomial representation and addition

#include<stdio.h>
#include<stdlib.h>

#define MAX 100
// polynomial definition
struct polynomial{
	int coeff[MAX];
	int exp;
};
typedef struct polynomial poly;

void zeropolynomial(poly *);
int Max(int, int);
void insert(poly *);
void addition(poly, poly, poly *);
void display(poly);

int main(){
	poly p1, p2, p3;
	char ch = '1';
	while(ch!='4'){
		printf("1 -> INSERT\n");
		printf("2 -> ADDITION\n");
		printf("4 -> QUIT\n");
		printf("Enter the choice: ");
		fflush(stdin);
		ch = getchar();
		switch(ch){
			case '1':
				printf("Enter the first polynomial p1\n");
				insert(&p1);
				printf("1st polynomial is:\n");
				display(p1);
				printf("Enter second polynomial p2\n");
				insert(&p2);
				printf("2nd polynomial is:\n");
				display(p2);
				break;
			case '2':
				addition(p1,p2,&p3);
				printf("1st polynomial is:\n");
				display(p1);
				printf("2nd polynomial is:\n");
				display(p2);
				printf("The sum polynomial is:\n");
				display(p3);
				break;
			case '4':
				break;
		}
	}
	
	
	
	
	
}

void zeropolynomial(poly *p){
	for(int i=0;i<=MAX;i++){
		p->coeff[i] = 0;
	}
	p->exp = 0;
}

int Max(int x, int y){
	if(x>=y){return x;}
	else{return y;}	
}

void insert(poly *p){
	zeropolynomial(p);
	printf("Enter the order of your polynomial: ");
	scanf("%d", &p->exp);
	if(p->exp>MAX){
		printf("OVERFLOW");
	}
	for(int i=0;i<=p->exp;i++){
		printf("Enter the coefficient of %d exponents: ", i);
		scanf("%d", &p->coeff[i]);
	}
}

void addition(poly p1, poly p2, poly *p3){
	zeropolynomial(p3);
	p3->exp = Max(p1.exp, p2.exp);
	for(int i=p3->exp;i>=0;i--){
		p3->coeff[i] = p1.coeff[i] + p2.coeff[i];
	}
}

void display(poly p){
	int i,j, n=0;
	for(i=0;i<=p.exp;i++){
		if(p.coeff[i]!=0){
			n++;
		}
	}
	if(p.coeff[0]!=0){
		printf("%d", p.coeff[0]);
		printf(" + ");
	}
	j=1;
	for(i=1;i<p.exp && j<n-1; i++){
		if(p.coeff[i]!=0){
			if(p.coeff[i]==1){
				printf("x^%d", i);
				printf(" + ");
			}
			else{
				printf("%dx^%d", p.coeff[i], i);
				printf(" + ");
			}
			j++;
		}
	}
	for(;i<=p.exp;i++){
		if(p.coeff[i]!=0){
			if(p.coeff[i]==1){
				printf("x^%d", i);
//				printf("+");
			}	
			else{
				printf("%dx^%d", p.coeff[i], i);
//				printf("+");
			}	
		}
	}
	printf("\n");
	
}




