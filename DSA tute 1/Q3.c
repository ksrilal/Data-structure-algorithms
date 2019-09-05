#include <stdio.h>

int  gcd(int, int);

int main(){
	int x, y;
	
	printf("Enter your numbers: \n");
	scanf("%d %d",&x ,&y);
	
	printf("GCD of %d and %d is: %d",x ,y ,gcd(x, y));
		
	return 0;
}

int gcd(int x, int y){
	if(x==0)
		return y;
	else if(y==0)
		return x;
	else if(x==y)
		return x;
	else if(x>y)
		return gcd(x-y, y);
	else
		return gcd(x, y-x);
}
