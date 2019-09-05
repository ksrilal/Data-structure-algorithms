#include <stdio.h>

#define MAX 10

int stack[MAX];
top = -1;

void push(int n){
	if(isfull())
		return ;
	else{
		stack[++top] = n;
	}
}

void pop(){
	if(isempty())
		return ;
	else
		top--;
}

int isempty(){
	if(top == -1)
		return 1;
	else
		return 0;
}

int isfull(){
	if(top == MAX-1)
		return 1;
	else
		return 0;
}

int getsize(){
	if(!isempty())
		return top;
}

void output(){
	if(!isempty()){
		int i;
		for(i=0;i<=top;i++)
			printf("%d ",stack[i]);
	}else
		printf("\nStack is empty!");
}

int main(){
	
	push(5);
	push(3);
	push(1);
	output();
	getsize();
	pop();
	
	printf("\n");
	
	output();
	
	return 0;
}
