#include<stdio.h>
int main(){
	int x=7,y,z;
	y= x--;
	z= --y;
	printf("value x===%d\n",x);
	printf("value y===%d\n",y);
	printf("value z===%d\n",z);
}
