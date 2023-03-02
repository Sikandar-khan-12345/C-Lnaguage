
#include<stdio.h>
int main(){
	int n,a,b,c,d,e,f,g,h,sum;
	printf("Enter the number");
	scanf("%d",&n);
	a=n%10;
	b=n/10;
	c=b%10;
	d=b/10;
	e=d%10;
	f=d/10;
	g=f%10;
	h=f/10;
	sum=a+c+e+g+h;
	printf("%d%d%d%d%d",a,c,e,g,h);
//printf("%d",sum);
}
