#include<stdio.h>
int main(){
	int a=5,b=4,c=7;
//	printf((a>b)? (a>c)? "a is great" : "c is great" : 
//        (b>c)? "b is great" : "c is great");

//	printf(a>b ? "A is great\n" : "B is great");
//	printf(a>c? "A is great\n" : "C is great");
//	printf(b>c ? "B is great" : "C is great\n");
	
	//nasted:
	if(a>b){
		if(a>c){
			printf("A is great");
		}
		else{
			printf("C is great");
		}
	}
	else{
		if(b>c){
			printf("B is great");
		}
		else{
			printf("C is great");
		}
	}
	
	
    
}
