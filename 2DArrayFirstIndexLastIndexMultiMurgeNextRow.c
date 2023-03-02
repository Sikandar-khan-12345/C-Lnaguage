//#include<stdio.h>
//int main(){
//	int arr[2][5],sum=0,i,j;
//	printf("Enter the array elements ");
//	for(i=0;i<2; i++){
//		for(j=0; j<4; j++){
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	for(i=0;i<2; i++){
//		for(j=0; j<5; j++){
//			if(i==2-1){
//				arr[0][4]=arr[0][0]*arr[0][3];
//				arr[1][4]=arr[1][0]*arr[1][3];
//			}
//		}
//	}
//	for(i=0;i<2; i++){
//		for(j=0; j<5; j++){
//			printf("%d\t",arr[i][j]);
//		}
//		printf("\n");
//	}
//}


        // SCANF
        
#include<stdio.h>
int main(){
	
	int row=0,col=0,i,j;
	
	printf("Enter the row size ");
	scanf("%d",&row);
	
	printf("Enter the col size ");
	scanf("%d",&col);
	
	int arr[row][col];
	printf("Enter the array elements ");
	for(i=0; i<row; i++){
		for(j=0; j<col-1; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
		     if(i==row-1){
		     	arr[0][col-1]=arr[0][0]*arr[0][col-2];
		     	arr[1][col-1]=arr[1][0]*arr[1][col-2];
			 }
		}
	}  
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}









