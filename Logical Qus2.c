#include<stdio.h>
int main(){
	int a=0,b=1,c,d,e;
	c = (a>=b) && !(b>=a);
	d = (c==a) && !(a>=b);
	e = (c==d) && (d>=a);
	printf("value of c==%d\n",c);
	printf("value of d==%d\n",d);
	printf("value of e==%d\n",e);
}
