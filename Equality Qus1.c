#include<stdio.h>
int main(){
	int z,y,a,b;
	printf("enter the number");
	scanf("%d",&z);
	printf("enter the second number");
	scanf("%d",&y);
	a = (z==y);
	b = (z!=y);
	printf("value of a===%d\n",a);
	printf("value of b===%d\n",b);
	return 0;
	
}
