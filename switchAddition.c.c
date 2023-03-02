#include<stdio.h>
int main(){
	int a,b,c;
	
	printf("Enter the a value");
	scanf("%d",&a);
	
	printf("Enter the b value");
	scanf("%d",&b);
	
	printf("Enter your choice==>\n 1:Additional\n 2:Subtract\n 3:multyply\n 4:divide\n");
	scanf("%d",&c);
	
	switch(c){
		case 1 : 
		printf("Addition is===>%d",a+b);
		break;
		
		case 2 : 
		printf("Subtract is==>%d",a-b);
		break;
		
		case 3 : 
		printf("multyply is===>%d",a*b);
		break;
		
		case 4 : 
		printf("divid is==>%d",a/b);
		break;
	}
}

