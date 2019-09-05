#include <stdio.h>

char string[20];
int ispal(int, int);

int main(){
	
	printf("Enter string:");
	gets(string);
	
	int n = 0;
	
	if(ispal(n, strlen(string)-1)==1){
		printf("String is palindrome");
	}
	else
		printf("String is not palindrome");
	
	return 0;
}

int ispal(int x, int y){
	if(x==y || x>y)
		return 1;
	else if(string[x]==string[y])
		ispal(x+1,y-1);
	else
		return 0;
}
