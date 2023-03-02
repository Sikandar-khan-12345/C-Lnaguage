#include<stdio.h>
int main(){
	int  i,fact=1,n;
	
	printf("Enter the factorial number===>");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		fact*=i;   //  fact = fact*i;
		
		printf("%d\n",i);
		
	} 
	
	printf("factorial of===> %d",fact);
}
