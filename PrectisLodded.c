#include<stdio.h>
int main(){
	int t;
	printf("Enter the number (1-7)>>>");
	scanf("%d",&t);
	if(t==1){
		printf("Sunday");
	}
	else if(t==2){
		printf("Monday");
	}
	else if(t==3){
		printf("thusday");
	}
	else if(t==4){
		printf("wednsday");
	}
	else if(t==5){
		printf("thursday");
	}
	else if(t==6){
		printf("frieday");
	}
	else if(t==7){
		printf("saturday");
	}
	else{
		printf("not a day");
	}
}
