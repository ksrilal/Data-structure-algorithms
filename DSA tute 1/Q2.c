#include <stdio.h>

int sum(int);

int main(){
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	
	printf("Sum of digits of %d is %d",num ,sum(num));
	
	return 0;
}

int sum(int n){
	
	int result;
	
	if(n>0){
		result = n%10 + sum(n/10);
	}
	
	return result;
}
