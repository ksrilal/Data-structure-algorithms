#include <stdio.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(int n){
	if(top != MAX-1)
		stack[++top] = n;
}

void pop(){
	if(top != -1)
		top--;
}

void display(){
	int i;
	
	for(i=top;i>=0;i--)
		printf("%d",stack[i]);
}

int main(){
	
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	
	int i;
	
	do{
		push(num%2);
		num = num/2;
	}while(num!=1);
	
		push(1);
	
	printf("\n");
	display();
	
	return 0;
}

