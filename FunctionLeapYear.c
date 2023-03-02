#include<stdio.h>
int leapyear(int x);
int main(){
	
	int year,i;
	printf("Enter the year ");
	scanf("%d",&year);
	
		leapyear(year);
	
}
leapyear(x){
		if(x%4==0){
			printf("this is leap year...");
			
		}
		else{
			printf("this is not a leap year...");
		}
}
