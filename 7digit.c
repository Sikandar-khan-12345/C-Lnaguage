#include<stdio.h>

 int main(){
	int n,a,b,c,d,e,f,g,h,i,j,k,l,sum;
	printf("inter the n==>");
	scanf("%d",&n);
	a=n%10;
	b=n/10;
	c=b%10;
	d=b/10;
	e=d%10;
	f=d/10;
	g=f%10;
	h=f/10;
	i=h%10;
	j=h/10;
	k=j%10;
	l=j/10;
	sum = a+c+e+g+i+k+l;
	printf("%d",sum);



	return 0;
	
	}
	

