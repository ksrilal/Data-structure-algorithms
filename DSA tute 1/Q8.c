#include <stdio.h>

int findeven(int, int);
int findodd(int, int);

int main(){
	int x, y;
	
	printf("Enter range: \n");
	scanf("%d",&x);
	printf("to\n");
	scanf("%d",&y);
	
	printf("Evens:");
	findeven(x,y);
	printf("\nOdds:");
	findodd(x,y);
	
	return 0;
}

int findeven(int x, int y){
	if(x<=y){
		if(x%2==0)
			printf("%d ",x);
		
		findeven(x+1,y);
	}
}

int findodd(int x, int y){
	if(x<=y){
		if(x%2==1)
			printf("%d ",x);
		
		findodd(x+1,y);
	}
}
