#include<stdio.h>

main (){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    
    int i,j;
    
    for (i=0;i<3;i++){ 
    	for (j=0;j<3;j++){
		
    	printf ("%d\t",arr[i][j]);
        }
        printf("\n");
	}  
	printf ("\n");
	 int abc;
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){ 
		} 
	  abc=arr[0][j];
	  arr[0][j]=arr[2][j];
	  arr[2][j]=abc;	
	}
    
   printf ("%d\t",arr[i][j]);


} 

