#include<stdio.h>
int main(){
	int i,tabbel;
	
	printf("Enter the tabbel Number");
	scanf("%d",&tabbel);
	
	for(i=1; i<=10;i++){
		
		printf("%d\n",i*tabbel);
	}
	for(i=1; i<=10;i++){
		if(i*tabbel%3==0){
			printf("%d is a even of theree\n",i*tabbel);
		}
		else{
			printf("%d is a odd of theree\n",i*tabbel);
		}
	}
	
	
	
}
