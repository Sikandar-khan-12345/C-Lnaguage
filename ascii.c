#include<stdio.h>
int main(){
	char ch;
	printf("enter the charcter");
	scanf("%c",&ch);
	
	if((ch>=97 && ch<=122) ||
	(ch>=65 && ch<=90 )){
		printf("A to Z");
	}
	else{
		printf("a to z");
	}
	 
}
