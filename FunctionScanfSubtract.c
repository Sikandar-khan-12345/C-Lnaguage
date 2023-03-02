#include<stdio.h>
int sum(int a, int b);
int main(){
	
	int a,b;
	printf("Enter the a value ");
	scanf("%d",&a);
	
	printf("Enter the b value ");
	scanf("%d",&b);
	int ans;
	ans = sum(a,b);
	printf("subtract of ==>%d",ans);
	
	
}

sum(a,b){
	int c = a-b;
	
	return c;
}
