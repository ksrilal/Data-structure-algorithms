
//incomplete

#include <stdio.h>
#define MAX 100

char stack[MAX];

int top = -1;

void reverse();

void push(char c){
	if(top != MAX-1)
		stack[++top] = c;
}

char pop(){
	if(top != -1)
		return stack[top--];
}

int main(){
	
	char a1[50];
	char a2[50];
	
	printf("Enter String: ");
	gets(a1);
	
	int i;
	int x = strlen(a1);
	
	for(i=0;i<z;i++)
		push(a1[i]);
		
	reverse();
	
	return 0;
}

void reverse(){
	
}
