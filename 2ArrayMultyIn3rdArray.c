#include <stdio.h>

int main() { 
//    int arr1[5]={1,2,3,4,5};
//    int arr2[5]={5,6,7,8,9};
//    int sum1, sum2, max;
//    int i;
//   for(i=2;i<5;i++){
//         sum1=arr1[2]*arr1[3]*arr1[4];
//     
//    }
//    int j;
//   for(j=2;j<5;j++){
//      sum2 = arr2[2]*arr2[3]*arr2[4];
//   }
//    max = sum1*sum2;
//    
//    printf("%d",max);
//    
    
    //SCANF SE//
    
    int arr1[100], arr2[100],multi1,multi2,mix_multi,size,i;
    printf("Enter the araay size ");
    scanf("%d",&size);
    
    printf("Enter the first araay elements ");
    for(i=0; i<size; i++){
    	scanf("%d",&arr1[i]);
	}
	printf("Enter the second araay elements ");
	for(i=0; i<size; i++){
		scanf("%d",&arr2[i]);
	}
	for(i=2; i<size; i++){
		multi1 = multi1*arr1[i];
	}
	for(i=2; i<size; i++){
		multi2 = multi2*arr2[i];
	}
	mix_multi = multi1*multi2;
	printf("%d",mix_multi);
    
    
}
