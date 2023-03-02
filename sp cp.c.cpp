#include<stdio.h>
int main(){
	int cp,sp;
	printf("enter the cost price");
	scanf("%d",&cp);
	printf("enter the selling price");
	scanf("%d",&sp);

	printf((cp>sp) ?  "loss of %d": (cp==sp) ? "no profit & no loss" : "profit of %d",cp-sp,sp-cp);
}
