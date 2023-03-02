#include<stdio.h>
int main(){
	int arr[100];
int n;
printf("Enter the siz");
scanf("%d",&n);

int j;
printf("Enter the array");

for(j=0; j<n; j++){
	scanf("%d",&arr[j]);
	
}
int i;
int m;
m=n-1;
for(i=m;i>=0;i--){
	printf("reveras %d\n",arr[i]);
}

}
