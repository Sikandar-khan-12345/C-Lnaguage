#include<stdio.h>
int main(){
	int a,b,c,d,e;
	printf("enter the number");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	printf(a>b ? "A is great\n" : "B is great\n");
	printf(b<c ? "B is great\n" : "C is great\n");
	printf(c<d ? "C is great\n" : "D is great\n");
	printf(d>e ? "D is great\n" : "E is great\n");
}
