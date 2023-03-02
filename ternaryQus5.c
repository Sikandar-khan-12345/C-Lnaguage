#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("enter the number");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf((a>b)? (a>c)? (a>d)? "A is great" :"d is great" :
	 (b>c)? "B is great" :"c is great" :
	 (c>d)? "C is great" :"D is great");

}
