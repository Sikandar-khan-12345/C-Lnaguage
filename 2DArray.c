#include<stdio.h>
int main(){
	int rowsize,colsize,i,j;;
	
	printf("Enter the rowsize ");
	scanf("%d",&rowsize);
	
	printf("Enter the colsize ");
	scanf("%d",&colsize);
	
	int arr[rowsize][colsize];
	
	printf("Enter the row elements==> ");
	for(i=0; i<rowsize; i++){
		for(j=0; j<colsize; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0; i<rowsize; i++){
		for(j=0; j<colsize; j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	
	
	
}
