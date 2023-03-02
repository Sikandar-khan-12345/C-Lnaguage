#include<stdio.h>
int main(){
	int *p,**q,**s,a=5;
	
	p=&a;
	q=&p;
	s=&p;
	
	printf("Value of &&&p ===>%d\n",&p);
	printf("Value of a ===>%d\n",--a);
	printf("Value of a ===>%d\n",&a);
//	printf("Value of p ===>%d\n",p++);
	printf("Value of *p ===>%d\n",*p);
//	printf("Value of q ===>%d\n",++q);
    printf("Value of *q ===>%d\n",*q);
	printf("Value of **P ===>%d\n",**s);
	
}


