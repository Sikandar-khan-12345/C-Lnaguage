#include<stdio.h>
int main(){
//	int i,j;
//	
//	for(i=1; i<=5; i++){
//		for(j=1; j<=5; j++){
//			if(i%2==0){
//				printf(" 0 ");
//			}
//			else{
//				printf(" 1 ");
//			}
//			
//		}
//		printf("\n");
//	}

//      int x,y;
//      
//      for(x=1; x<=5; x++){
//      	for(y=1; y<=5; y++){
//      		
//      			printf("%d\t",x*2);
//			
//			  
//		  }
//		  printf("\n");
//	  }

//   int x,y;
//      
//      for(x=1; x<=5; x++){
//      	for(y=1; y<=5; y++){
//      		if(x%2==0){
//      			printf("   ");
//			  }
//			  else{
//			  	printf(" 1 ");
//			  }

//           int x,y;
//      
//      for(x=1; x<=5; x++){
//      	for(y=1; y<=x; y++){
//      		
//      		if(y%2==0){
//      			
//      			printf(" 0 ");
//			  }
//			  else{
//			  	printf(" 1 ");
//			  }
//      		
//      		
//      			
//		  }
//		  printf("\n");
//	  }

//          int x,y;
//      
//      for(x=97; x<=122; x++){
//      	
//      	for(y=97; y<=x; y++){
//      		printf(" %c ",y);
//      		
//		  }
//		   printf("\n");
//	  }

                int x,y;
      
      for(x=1; x<=5; x++){
    
      	for(y=1; y<=x; y++){
      		if((x==3) && (y==2)){
      			printf(" ");
			  }
			  else if((x==4) && (y==2)){
			  	printf(" ");
			  }
			  else if((x==4) && (y==3)){
			  	printf(" ");
			  }
			  else{
			  	printf("*");
			  }
      		
		  }
		   printf("\n");
	  }
	 

}
