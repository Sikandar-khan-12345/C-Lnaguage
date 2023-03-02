#include<stdio.h>
int main(){
	int z=6,y=12,a,b,c,d,e;
//	printf("enter the number");
//	scanf("%d",&z);
//	printf("enter the second number");
//	scanf("%d",&y);
	a = (z+=y); //z=18      a=18
	b = (z-=y); //z=6       b=6
	c = (z*=y); //z=72      c=72
	d = (z/=y); //z=6       d=6
	e = (z%=y); //z=6       e=6
	printf("value of a===%d\n",a);
    printf("value of b===%d\n",b);
    printf("value of c===%d\n",c);
	printf("value of d===%d\n",d);
	printf("value of e===%d\n",e);
    printf("value of z===%d\n",z);
	
}
