#include <stdio.h>

int main(){
	
	char a1[100];
	char a2[100];
	char a3[100];
	
	printf("Enter first string: ");
	gets(a1);
	
	printf("\nEnter second string: ");
	gets(a2);
	
	int x, y;
	x=strlen(a1);
	y=strlen(a2);
	
	int i=0, j=0, k=0;
	
	for(i=0;i<x+y;i++){
		if(i%2==0){
			a3[i]=a1[k];
			k++;
		}else{
			a3[i]=a2[j];
			j++;
		}
	}
	
	printf("\nAnswer: ");
	
	for(i=0;i<x+y;i++){
		printf("%C ",a3[i]);
	}
	
	return 0;
}
