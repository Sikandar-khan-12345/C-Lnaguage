#include<stdio.h>
  int main(){
  	int arr[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };
		int i,j;
		
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				
				printf("%d\t",arr[i][j]);
			
			}
			printf("\n");
			
		}
		printf("\n");
		int abc;
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				
				abc = arr[0][j];
				arr[0][j] = arr[2][j];
				arr[2][j] = abc;
				printf("%d\t",arr[i][j]);		
			}
			printf("\n");
			
		}
	


            //  koching work//
            
            
  
//        int arr[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };
//        int cpy[3];
//		int i,j;
//		
//		for(i=0; i<3; i++){
//			for(j=0; j<3; j++){
//				
//				printf("%d\t",arr[i][j]);
//			
//			}
//			printf("\n");
//			
//		}
//		printf("\n");
//
//		for(i=0; i<3; i++){
//			for(j=0; j<3; j++){
//				if(i==0){
//					cpy[j] = arr[i][j];
//					arr[i][j] = arr[2][j];
//				}		
//				if(i==2){
//					
//					arr[i][j] = cpy[j];
//				}
//			}
//			
//			
//		}
//		for(i=0; i<3; i++){
//			for(j=0; j<3;j++){
//				printf("%d\t",arr[i][j]);
//			}
//			printf("\n");
//		}
//		
		
  	
  }
