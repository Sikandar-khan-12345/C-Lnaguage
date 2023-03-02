#include<stdio.h>
 int EvenOdd(int x);
int main(){
	int last;
	printf("Enter the last number==> ");
	scanf("%d",&last);
	
	int  i;
	for(i=1; i<=last; i++){
	
	int ans;
	ans = EvenOdd(i);
//	printf("%d\n",ans);
	
	
}

}
EvenOdd(y){
//	int c = y;
	if(y%2==0){
		printf("Even number===>%d\n",y);
	}
	
	else{
		printf("Odd number====>%d\n",y);
	}
//	return c;
}
