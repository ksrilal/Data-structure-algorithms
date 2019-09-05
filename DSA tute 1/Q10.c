#include <stdio.h>

int fibo(int);

int main(){
	int n, i;
	
	printf("Enter number: ");
	scanf("%d",&n);
	
	printf("Fibonacci sereis is:\n");
	
	for(i=0; i<=n-1;i++)
		printf("%d",fibo(i));
	
	return 0;
}

int fibo(int n){
	if(n==0 || n==1)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);
}
