#include<stdio.h>
int main(){
	int a=9,b=4,c=8,d=10,e=27;
//	printf("enter the number");
//	scanf("")
	
	printf((a>b)? (a>c)? (a>d)? (a>e)?  "A is great":"E is great":
	(b>c)? (b>d)? "b is great":"d is great":
	(c>d)? (c>e)?"C is great":"D is great":
	(d>e)?"D is great":"E is great" );
	}
