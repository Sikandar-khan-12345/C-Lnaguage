//#include<stdio.h>
int main(){
	int n,a,b,c,d,e,f,sum;
	printf("value of n==>");
	scanf("%d",&n);

	a=n%10;
	b=n/10;
	c=b%10;
	d=b/10;
	e=d%10;
	f=d/10;

	sum = a+c+e+f;
	printf("%d",sum);
}
