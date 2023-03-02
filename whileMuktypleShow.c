  
#include<stdio.h>
int main(){
  int a=1,b;
	printf("Enter the number===>");
	scanf("%d",&b);
	
	while(a<=10){
		printf("%d*%d=%d\n",b,a,a*b);
		a++;
	}
}
