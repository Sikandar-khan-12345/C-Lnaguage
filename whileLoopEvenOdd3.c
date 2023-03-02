#include<stdio.h>
int main(){
	int a,b;
	
	printf("Enter The Starting Number");
	scanf("%d",&a);
	
	printf("Enter The Ending Number");
	scanf("%d",&b);
	
	while(a<=b){
		if(a%2==0){
			printf("%d is a Even Number\n",a);
		}
		else{
			printf("%d is a Odd Number\n",a);
		
		
	}
	a++;
  }
}
