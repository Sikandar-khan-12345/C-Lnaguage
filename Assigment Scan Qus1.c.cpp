#include<stdio.h>
int main(){
	int z,y,a,b,c,d,e;
	printf("enter the number");
	scanf("%d",&z);
	printf("enter the second number");
	scanf("%d",&y);
	a = (z+=y);
	b = (z-=y);
	c = (z*=y);
	d = (z/=y);
	e = (z%=y);
	printf("value of a===%d\n",a);
    printf("value of b===%d\n",b);
    printf("value of c===%d\n",c);
	printf("value of d===%d\n",d);
	printf("value of e===%d\n",e);
	printf("value of z===%d\n",z);
	
}
