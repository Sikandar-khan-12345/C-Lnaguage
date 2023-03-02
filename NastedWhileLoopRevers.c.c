#include<stdio.h>
int main(){
	         
    int s=1,tabbel;
    
    printf("Enter the tabbel number");
    scanf("%d",&tabbel);
    
    while(s<=10){
    	
    	int t=1;
    	
    	while(t<=5){
    		
    		if(t*tabbel){
    			printf("%d\t",s*tabbel);
    			
    			t++;
    			
			}
				
		}
		s++;
		
		printf("\n");
	
}
