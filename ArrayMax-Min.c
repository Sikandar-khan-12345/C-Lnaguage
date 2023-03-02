#include<stdio.h>
int main(){
	
int arr[100],n;


printf("Enter the aaray size");
scanf("%d",&n);

int k;
printf("Enter the array elements");
for(k=0; k<n; k++){
	scanf("%d",&arr[k]);
}
 
 int i,max=arr[0], min=arr[0];
 
 for(i=0; i<n ;i++){
 	if(arr[i]>max){
 		max=arr[i];
	 }
	 if(arr[i]<min){
	 	min=arr[i];
	 }
	 
 }
 printf("max %d\n",max); 
    
 
	printf("minimum %d",min);
			
			
}
