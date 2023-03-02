#include<stdio.h>
int main(){
	int ch;
	printf("Enter the charcter");
	scanf("%c",&ch);
	
	if(ch==65 || ch==69 || ch==73 || ch==79 || ch==85){
		printf("%c is a vovels charcter",ch);
		
		
	}
	else if(ch==97 || ch==101 || ch==105 || ch==111 || ch==117){
		printf("%c is a vovels charcter",ch);
    }
    else {
    	printf(" %c is a consonents",ch);
	}
}
