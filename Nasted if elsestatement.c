#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the A value\n");
	scanf("%d",&a);
	printf("enter the B value\n");
	scanf("%d",&b);
	printf("enter the C value\n");
	scanf("%d",&c);
	
	if (a>b){
		if(a>c){
			printf("A is great");
		}
		else{
			printf("C is great");
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

