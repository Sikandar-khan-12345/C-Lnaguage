#include<stdio.h>
int factorial(int a);
int main(){
	
	int n,fact=1,i;
	printf("Enter the factorial number ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		
		fact = fact*i;
	} 
	factorial(fact);

}
factorial(a){
	
	printf("factorial==>%d",a);
}

