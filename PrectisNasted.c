#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the A value\n Enter the B value \n Enter the C value\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b){
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
