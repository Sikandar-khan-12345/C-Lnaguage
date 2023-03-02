#include<stdio.h>
int main(){
	    int u=10,tabbel;
    
    printf("Enter the tabbel number");
    scanf("%d",&tabbel);
    
    while(u>=1){
    	int v=1;
    	while(v<=10){
    		if(v*tabbel){
    			printf("%d\t",u*tabbel);
    			
    			v++;
			}
		}
		u--;
		printf("\n");
	}
	
}

