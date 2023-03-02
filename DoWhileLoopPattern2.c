#include<stdio.h>
int main(){
	       
    int i=3;
    
    do{
    	int j=3;
    	do{
    		printf("*");
    		
    		j--;
		}while(j>=abs(i));
		
		i--;
		 
		printf("\n");
				
      }while(i>=-3);
}
