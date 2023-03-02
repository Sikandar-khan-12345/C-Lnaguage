#include<stdio.h>
int main(){
	int a;
	
	printf("Enter the number 50-100==>");
	scanf("%d",&a);
	
	while(a>=50 && a<=100){
		if(a%2==0){
			printf("%d is a even number\n",a);
		}
		else{
			printf("%d is a odd number\n",a);
		}
		a++;
	}
}
