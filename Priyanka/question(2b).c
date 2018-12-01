#include <stdio.h>  
#include <string.h>  
  
#define max 100  
int top,stack[max];  
  
int isempty()
{
if(top== - 1)
return 1;
else
return 0;
}

int isfull()
{
if(top== (max - 1))
return 1;
else
return 0;
}

void push(char x)
{  
  
      // Push(Inserting Element in stack) operation  
      if(isfull())
	{  
          printf("stack overflow");  
       }
       else 
	{  top++;
          stack[top]=x;  
      }  
  
}  
  
void pop(){  
    // Pop (Removing element from stack) 
	if(isempty())
	{
	printf("stack is empty \n");
	}
 
    	  printf("%c",stack[top]); //display the poped character
	top--; 
}  
  
  
void main()  
{  
   char str[100];  
   int len = strlen(str);  
   int i;  
  printf("enter the string you want to reverse \n");
      for(i=0;i<len;i++)
	{
	scanf("%c",&str[i]);
	}
   for(i=0;i<len;i++)  
        push(str[i]);  
  
   for(i=0;i<len;i++)  
      pop(); 

}