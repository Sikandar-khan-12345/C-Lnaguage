#include <stdio.h>

int main() {
    int Arr[5],divide=0;
    printf("Enter the Array Elements");
    int i;
    for( i=0;i<5;i++){
        scanf("%d",&Arr[i]);
        if(i==4){
            divide = Arr[2]/Arr[4];  
        }
          
      
    }
    printf("divide of Array Elements===%d",divide);

    return 0;
}
