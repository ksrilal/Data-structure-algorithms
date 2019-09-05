#include <stdio.h>

int max ;
int array[100];

int find(int);

int main(){
	
	int size, i;
	 
	printf("Enter list size: ");
	scanf("%d",&size);
	
	printf("Enter %d items:\n",size);
	
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	
	printf("Largest number is %d",find(size-1));
	
	return 0; 
}

int find(int n){
	
	if(n>=0){
		if(array[n]>max)
			max = array[n];
			
		find(n-1);
	}
	
	return max;
}
