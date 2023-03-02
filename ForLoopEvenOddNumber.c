#include<stdio.h>
int main(){
	int i,j,k;
	
	printf("Enter the starting number");
	scanf("%d",&j);
	
	printf("Enter the ending number");
	scanf("%d",&k);
	
	for(i=j; i<=k; i++){
		if(i%2==0){
			printf("%d is a even number\n",i);
		}
		else{
			printf("%d is a odd number\n",i);
		}
	}
}
