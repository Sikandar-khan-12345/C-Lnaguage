#include<stdio.h>
int main(){
//	 int arr[8]={1,-2,3,14,5,-1,-3,-4};
//    
//    int i,sum=0 ,negative= 0;
//    for(i=0; i<8; i++){
//    	
//    	
//    	if(arr[i]>=0){
//    		sum= sum+arr[i];
//    		
//    		printf("possitive %d\n",arr[i]);
//    		
//		}
//		else{
//			negative= negative+arr[i];
//			printf("negative %d\n",arr[i]);
//		}
//	}
//	printf("sum of possitive==>%d\n",sum);
//	printf("sum of negative==>%d\n",negative);
//   	
   	
   	   //scanf
   	   
	   
   int arr[100],n,j;
   
   printf("Enter the array size==>");
   scanf("%d",&n);
   
   printf("Enter the array elements==>");
   for(j=0; j<n; j++){
   	scanf("%d",&arr[j]);
   }
    
    int i,sum=0 ,negative= 0;
    for(i=0; i<n; i++){
    	
    	
    	if(arr[i]>=0){
    		sum= sum+arr[i];
    		
    		printf("possitive %d\n",arr[i]);
    		
		}
		else{
			negative= negative+arr[i];
			printf("negative %d\n",arr[i]);
		}
	}
	printf("sum of possitive==>%d\n",sum);
	printf("sum of negative==>%d\n",negative);
			
}
