#include<stdio.h>
int cpsp(int cp,int sp);
int main(){
	
	int costprice,sellingprice;
	printf("Enter the costprice ");
	scanf("%d",&costprice);
	printf("Enter the sellingprice ");
	scanf("%d",&sellingprice);
	
	cpsp(costprice,sellingprice);
	
}
cpsp(c,s){
	if(c>s){
		printf("loss of %d",c-s);
	}
	else if(c<s){
		printf("profit off %d",s-c);
	}
	else{
		printf("no profit no loss %d",c-s);
	}
}
