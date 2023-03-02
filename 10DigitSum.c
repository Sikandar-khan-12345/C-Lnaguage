#include<stdio.h>
int main(){
	int x,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,sum;
	printf("Enter the Digit>>>>");
	scanf("%d",&x);
	a = x%10;
	b = x/10;
	c = b%10;
	d = b/10;
	e = d%10;
	f = d/10;
	g = f%10;
	h = f/10;
	i = h%10;
	j = h/10;
	k = j%10;
	l = j/10;
	m = l%10;
	n = l/10;
	o = n%10;
	p = n/10;
	q = p%10;
	r = p/10;
	
    sum = a+c+e+g+i+k+m+o+q+r;
    printf("value of sum digit %d",sum);
    
    return 0;
}

