#include<stdio.h>
int main(){
	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {5,6,7,8,9};
	int arr3[10];
	int i;
	
	for(i=0; i<5; i++){
		arr3[i]= arr1[i];
	}
	int j=0;
	for(i=5; i<10; i++){
		arr3[i] = arr2[j];
		j++;
	}

	for(j=0; j<10; j++){
		printf("%d\t",arr3[j]);
	}
    
	return 0;
}
