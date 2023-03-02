#include<stdio.h>
int main(){
	int marks;
	
	printf("Enter the marks");
	scanf("%d",&marks);
	
	if(marks>=80){
		printf("A  gread");
		
	}
	else if(marks>=60){
		printf("B  gread");
	}
	else if(marks>=40){
		printf("C gread");
	}
	else{
		printf("fail");
	}
}
