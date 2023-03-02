#include <stdio.h>

int main() {
//    int arr1[5]={1,2,3,4,5};
//    int arr2[5]={5,6,7,8,9};
//    int arr3[5];
//    int i;
//   for(i=0;i<5;i++){
//        arr3[i]=arr2[i]+arr1[i];
//     
//    }
//    int j;
//   for(j=0;j<5;j++){
//       printf("%d\t",arr3[j]);
//   }
//    


      // SACANF SE//
      
      
    int arr1[100],arr2[100],arr3[100],n1,n2,i,j;
    
    printf("Enter the first array size");
    scanf("%d",&n1);
    
    printf("Enter the first array elements ");
    for(i=0; i<n1; i++){
    	scanf("%d",&arr1[i]);
	}
	printf("Enter the second array size ");
	scanf("%d",&n2);
	
	printf("Enter the second array elements ");
	for(i=0; i<n2; i++){
		scanf("%d",&arr2[i]);
	}
	for(i=0; i<n1; i++){
		arr3[i] = arr2[i]+arr1[i]; //multypply ke liye 
	}
	for(j=0; j<n2; j++){
		
		printf("%d\t",arr3[j]);
	}	   
    return 0;
}
