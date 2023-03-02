#include<stdio.h>
int main(){
	int a,b=1,multyply=1;
	
	printf("Enter the a value");
	scanf("%d",&a);
	
	while(b<=a){
		
		multyply= multyply * b;
		
		b++;
	}
	printf("multyply of %d",multyply);
}
