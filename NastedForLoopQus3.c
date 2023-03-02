#include<stdio.h>
int main(){
	int i,j,a=1;
	
	for(i=1; i<=5; i++){
		for(j=1; j<=5; j++,a++){
			printf(" %d\t ",a);
		}
		
		printf("\n");
	}
}        
