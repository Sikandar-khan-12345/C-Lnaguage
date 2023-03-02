#include<stdio.h>
int main(){
	int n,a,b,c,d;
	printf("inter the number");
	scanf("%d",&n);
	a=n%10;
	b=n/10;
	c=b%10;
	d=b/10;

	printf("revers of numbers===>%d%d%d",a,c,d);
}
