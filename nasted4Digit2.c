#include<stdio.h>
int main(){
	int a,b,c,d;
	
	printf(" Enter the  value of w===>\n Enter the  value of x===>\n Enter the  value of y===>\n Enter the  value of z===>\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a>b){
		if(a>c){
			if(a>d){
				printf("a is great");
			}
			else{
				printf("d is great");
			}
	    }
	    else{
	    	if(b>c){
	    		printf("b is great");
			}
			else{
				printf("c is great");
			}
		}
	}
	else{
		if(b>c){
			if(b>d){
				printf("b is great");
			}
			else{
				printf("d is great");
			}
		}
		else{
			if(c>d){
				printf("c is great");
			}
			else{
				printf("d is great");
			}
		}
	}
	
	
}
