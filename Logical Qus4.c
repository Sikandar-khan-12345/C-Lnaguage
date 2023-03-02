#include<stdio.h>
int main(){
	int x=0,y=0,z,a;
	a = (y==y) && (x==y);
	z = (a==y) || !(y==x);
	printf("value of a==%d\n",a);
	printf("value of z==%d\n",z);
}
