#include<stdio.h>
int sum(int a, int b , int c);
int main(){
	
	int i,j,k;
	printf("Enter the a value ");
	scanf("%d",&i);
	
	printf("Enter the b value ");
	scanf("%d",&j);
	
     printf("Sum for press 1 .\nSub for press 2 .\nMulti for press 3 .\nDevide for press 4 .\nEnter the Choice...\n");
	 scanf("%d",&k);	
	int ans;
	ans = sum(i,j,k);
	printf("%d",ans);
	
	
}

sum(a,b,c){
     if(c==1){
     	int c = a+b;
     	return c;
	 }
	 else if(c==2){
	 	int c = a-b;
	 	return c;
	 }
	 else if(c==3){
	 	int c = a*b;
	 	return c;
	 }
	 else if(c==4){
	 	int c = a/b;
	 	return c;
	 }
		 
	
	return c;
}

