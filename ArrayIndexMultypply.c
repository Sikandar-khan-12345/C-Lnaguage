#include <stdio.h>

int main() {
    int Arr[100],mult=1,n,k=0;
    printf("Size of Array Elements\n");
    scanf("%d",&n);
    k =n-2;  // second last index ko first index se multypply
    printf("Enter the Array Elements");
    int i;
    for( i=0;i<n;i++){
        scanf("%d",&Arr[i]);
       if(i==k){
           mult = Arr[1]*Arr[k];
       }
      
    }
    
    
     printf("Multiply of Array Elements===%d",mult);

    return 0;
}
