#include<stdio.h>
int main(){
	char ch;
	
	printf("Enter the charcter===>");
	scanf("%d",&ch);
	
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
		printf("%c is charcter",ch);
	}
	else{
		printf("%c is not charcter",ch);
	}
}
