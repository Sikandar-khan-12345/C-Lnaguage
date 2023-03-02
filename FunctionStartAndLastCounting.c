#include<stdio.h>
counting(int i);
int main(){
	int start;
	int last;
	printf("Enter the satrt number");
	scanf("%d",&start);
	printf("Enter the last number");
	scanf("%d",&last);
	
	int  i;
	for(i=start; i<=last; i++){
	
	int ans;
	ans = counting(i);
	printf("%d\n",ans);
}

}
counting(i){
	int c = i;
	return c;
}
