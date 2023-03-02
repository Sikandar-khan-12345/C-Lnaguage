#include<stdio.h>
int main(){
	int a,b,c,d;
	
	printf("Enter the a value");
	scanf("%d",&a);
	
	printf("Enter the b value");
	scanf("%d",&b);
	
	printf("Enter the c value");
	scanf("%d",&c);
	
	printf("Enter the d value");
	scanf("%d",&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("A is great");
			}
			else{
				printf("D is grreat");
			}
		}
		else{
			if(b>c){
				printf("B is great");
			}
			else{
				printf("C is great");
			}
		}
	}
	else{
		if(b>c){
			if(b>d){
				printf("B is great");
			}
			else{
				printf("D is great");
			}
		}
		else{
			if(c>d){
				printf("C is great");
		
		}
		    else{
			    printf("D is great");
		}
	}
}
}
