#include<stdio.h>
int sum(int a, int b);
int main(){
	
	int a = 30 , b = 20;
	int ans;
	ans = sum(a,b);
	printf("%d",ans);
	
	
}

sum(a,b){
	int c = a+b;
	
	return c;
}
