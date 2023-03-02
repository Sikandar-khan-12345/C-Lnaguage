#include<stdio.h>
int main(){
	int n,i=1,sum=0;
	
	printf("Enter the number");
	scanf("%d",&n);
	
	while(i<=n){
	  sum = sum + i;
	  printf("%d\n",i);
	  
	  i++;
	}
	printf("sum of===> %d",sum); 	
}
