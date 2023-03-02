#include<stdio.h>
int main(){
	int year;
	
	printf("Enter year");
	scanf("%d",&year);
	
	if(year%4==0){
		printf(" is a leap year %d",year);
		
	}
	else{
		printf(" is a not a leap year %d",year);
	}
}
