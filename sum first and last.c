#include<stdio.h>
int main(){
	int n,a,b;
	printf("enter the number");
	scanf("%d",&n);
	a = n%10;
	b = n/1000;
	
	printf("sum of %d",a+b);
}
