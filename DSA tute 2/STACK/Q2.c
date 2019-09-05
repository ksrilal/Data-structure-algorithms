#include <stdio.h>
#define MAX 100
char stack[MAX];

int top = -1;

void push(char c){
	if(top != MAX-1)
		stack[++top] = c; 
}

int pop(){
	if(top!=-1)
		return stack[top--];
}

int main(){
	char a1[50];
	char a2[50];
	
	printf("Enter string: ");
	gets(a1);
	
	int x = strlen(a1);
	
	int i;
	
	for(i=0;i<x;i++)
		push(a1[i]);
	
	for(i=0;i<x;i++)
		a2[i] = pop();
		
	printf("\nReversed string: ");
	puts(a2);	
	
	printf("\n String is ");
		if(strcmp(a1,a2) != 0)
			printf("not ");
			
	printf("palindrome.");
	
	return 0;
}


