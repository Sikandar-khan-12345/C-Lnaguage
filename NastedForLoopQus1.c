#include<stdio.h>
int main(){
	
	   // fibonecies sireows
	int i,a=0,b=1,sum;
	
	sum = a + b;
	
	for(i=1; i<=10; i++){
		
		printf("%d\t",sum);
		
		a = b;
		
		b = sum;
		
		sum = a + b;
		
	}


}
