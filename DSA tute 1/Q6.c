#include <stdio.h>

char string[20];
char fcap(int);
char c;

int main(){
	
	printf("Enter string: ");
	gets(string);
	int n = 0;
	
	printf("First capital letter is %c",fcap(n));
}

char fcap(int n){
	if(n<strlen(string)){
		if(isupper(string[n]))
			return string[n];
		else
			fcap(n+1);
	}
}
