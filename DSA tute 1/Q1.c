#include <stdio.h>

int natural(int);

int main(){
	
	int num = 1;

	printf("First 50 natural numbers-\n");
	natural(num);
	
	return 0;
}

int natural(int n){
	if(n<=50){
		printf("%d,",n);
		natural(n+1);
	}
	return 0;	
}
