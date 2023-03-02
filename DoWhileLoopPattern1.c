#include<stdio.h>
int main(){
	
	    int i=1;
    
    do{
    	int j=1;
    	do{
    		if((i+j)%2==1){
    			printf("_");
			}
			else{
				printf("*");
			}
			j++;	
		}while(j<=5);
		i++;
		printf("\n");
	}
	while(i<=5);
}
