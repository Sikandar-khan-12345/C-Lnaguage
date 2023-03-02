#include <stdio.h>

int main() {
    int Arr[5],sum=0;
    printf("Enter the Array Elements");
    int i;
    for( i=0;i<5;i++){
        scanf("%d",&Arr[i]);
        sum=sum+Arr[i];
    }
    int abc;
     abc =Arr[0];
     Arr[0]=Arr[1];
     Arr[1] =abc;
    printf("Sum of Array Elements===%d",sum);

    return 0;
}
