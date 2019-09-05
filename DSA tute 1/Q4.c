#include <stdio.h>

void bin(int);

int main(){
	
	int num;
	
	printf("Enter number: ");
	scanf("%d",&num);
	
	bin(num);
	
	return 0;
}

void bin(int n){
	if(n==0)
		return ;
		
	bin(n/2);
	printf("%d",n%2);
}
