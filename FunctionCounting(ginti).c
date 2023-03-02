#include<stdio.h>
int counting(int i);
main (){
 	int last;
 	printf ("enter the last number ");
 	scanf ("%d",&last); 
 	
 	int ans;
 	int i;
 	 
 	
 	for(i=1; i<=last; i++){
	 
 	ans=counting(i);
 	
 }
} 

counting(i){
			
		int c = i;
		printf ("%d\n",i);
		return c; 
}
