#include<stdio.h>
int main(){
	int a = 5,b=5,c,d;
	c = (a<=b) && !(b>a);
	d = (c==a) || !(c>=b);
	printf("value of c==%d\n",c);
	printf("value of d==%d\n",d);
}
