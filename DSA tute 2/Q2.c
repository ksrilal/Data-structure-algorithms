#include <stdio.h>

int main(){
	
	int n, m, i=0, k;
	int a1[100];
	int a2[100];
	
	int a3[100];
	
	printf("Enter first array size: ");
	scanf("%d",&n);
	
	printf("\nEnter first array size: ");
	scanf("%d",&m);
	
	printf("\nEnter first array elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a1[i]);
	}
	
	printf("\nEnter first array elements: \n");
	for(i=0;i<m;i++){
		scanf("%d",&a2[i]);
	}
	
	for(i=0;i<n;i++){
		a3[i]=a1[i];
	}
	k = n;
	for(i=0;i<m;i++){
		a3[k]=a2[i];
		k++;
	}
	
	printf("\nMerged array: ");
	for(i=0;i<n+m;i++){
		printf("%d ",a3[i]);
	}
	
	return 0;
}
