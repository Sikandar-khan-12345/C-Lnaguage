#include<stdio.h>
int main(){
	
	int i,j,row,colom;
	
	printf("Enter the row number");
	scanf("%d",&row);
	
	printf("Enter the colom number");
	scanf("%d",&colom);
	
	for(i=1; i<=row; i++){
		for(j=1; j<=colom; j++){
			printf("%d",j);
		}
		printf("\n");
	}
	
}
