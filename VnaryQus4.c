#include<stdio.h>
int main(){
	int a = 0,b,c;
	b = a++;
	c = --b;
	printf("value of a===%d\n",a);
	printf("value of b===%d\n",b);
	printf("value of c===%d\n",c);
}
