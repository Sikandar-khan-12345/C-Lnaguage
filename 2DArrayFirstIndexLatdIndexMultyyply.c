#include<stdio.h>
int main(){
	int rowsize,colsize,i,j,multi1=1;
     printf("Enter the  rowsize");
     scanf("%d",&rowsize);
     printf("Enter the colsize ");
     scanf("%d",&colsize);
     int arr[rowsize][colsize];
     printf("Enter the row elements ");
     for(i=0; i<rowsize; i++){
     	for(j=0; j<colsize; j++){
     		scanf("%d",&arr[i][j]);
		 }
	 }
	 for(i=0; i<rowsize; i++){
     	for(j=0; j<colsize; j++){
     	    if(i==0){
     			multi1 = multi1*arr[i][j];
			 }
			 if(i==colsize-1){                       // last index = lenth-1;  5-1 =4
			 	multi1 = multi1*arr[i][j];
		   }
					   	
		 }
		
	 }
	 for(i=0; i<rowsize; i++){
	 	for(j=0; j<colsize; j++){
	 		printf("%d\t",arr[i][j]);
		 }
		 printf("\n");
	 }
	 printf("multipply of first row and last row===>%d",multi1);
	 			
}

     
