#include<stdio.h>
int main(){
	char ch;
	
	printf("Enter the uper charcter===>");
	scanf("%c",&ch);
	
	if(ch>=65 && ch<=90){
		printf("%c is a UperCase charcter",ch);
		
	}
	else if(ch>=97 && ch<=122){
		printf("%c is a LowerCase charcter",ch);
	}
	else{
		printf("%c this is not a charcter",ch);
	}
}
