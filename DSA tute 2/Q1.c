#include <stdio.h>

int main(){
	
	int array[100];
	int size;
	
	printf("Enter number of elements:\n");
	scanf("%d",&size);
	printf("\nEnter elements:\n");
	
	int i;
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	
	printf("\nElements: ");
	
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	
	float sum=0.0;
	
	for(i=0;i<size;i++){
		sum += array[i];
	}
	
	printf("\nAverage = %.2f",sum/size);
	
	int temp;
	
	temp = array[1];
	
	for(i=0;i<size;i++){
		if(temp>array[i]){
			temp = array[i];
		}
	}
	
	printf("\nSmallest number: %d",temp);
	
	return 0;
}
