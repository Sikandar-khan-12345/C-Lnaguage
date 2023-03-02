#include<stdio.h>
int main(){
	int n;
	
	printf("Enter the number===>");
	scanf("%d",&n);
	
	if(n>0){
		printf("%d Number is Positive",n);
	}
	else if(n<0){
		printf("%d Number is Negative",n);
	}
	else{
		printf("Number is Zero");
	}
}
