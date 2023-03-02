#include<stdio.h>
int main(){
	int n,a,b,c,d,e,f;
	printf("enter the number");
	scanf("%d",&n);
	a=n%10;
	b=n/10;
	c=b%10;
	d=b/10;
	e=d%10;
	f=d/10;
	printf("reveres of number===>%d%d%d%d",a,c,e,f);
}
