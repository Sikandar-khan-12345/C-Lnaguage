#include<stdio.h>
int main(){
	int a,b,c,d,e;
	printf("enter the number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	c = (a>=b) && !(b>=a);
	d = (c==a) && !(a>=b);
	e = (c==d) && (d>=a);
	printf("value of c==%d\n",c);
	printf("value of d==%d\n",d);
	printf("value of e==%d\n",e);
	
}
