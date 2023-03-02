#include<stdio.h>
int tabbels(int tabbel, int i);
main (){
 	int tabbel;
 	printf ("enter the tabbel number ");
 	scanf ("%d",&tabbel); 
 	
 	int ans;
 	int i;
 	
 	
 	for(i=1; i<=10; i++){
	 
 	ans=tabbels(tabbel,i);
 	printf ("%d\n",ans);
 }
} 

tabbels(tabbel,i){
			
		int c = i*tabbel;
		return c; 
}
