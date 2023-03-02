#include<stdio.h>
int main(){
	char ch;
	
	printf("Enter the charcter===>");
	scanf("%c",&ch);
	
	if(ch>=65 && ch<=90){
		printf("%c this is charcter",ch);
	}
	else if(ch>=97 && ch<=122){
		printf("%c this is charcter",ch);
	}
	else{
		printf("this is not charcter");
	}
}
