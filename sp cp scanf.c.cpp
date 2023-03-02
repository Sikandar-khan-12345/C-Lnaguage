#include<stdio.h>
int main(){
	int cp,sp;
	printf("enter the cost price");
	scanf("%d",&cp);
	printf("enter the selling price");
	scanf("%d",&sp);
	
	printf((cp>sp)? "loss of %d": "profit of %d",sp-cp,cp-sp);
}
