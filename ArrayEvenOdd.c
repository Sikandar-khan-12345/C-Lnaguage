#include <stdio.h>

int main() {
    int Arr[100],divide=0,n;
    printf("Size of Array Elements\n");
    scanf("%d",&n);
    printf("Enter the Array Elements");
    int i;
    for( i=0;i<n;i++){
        scanf("%d",&Arr[i]);
      
    }
    
    for( i=0;i<n;i++){
        if(Arr[i]%2==0){
            printf("Number is Even ==%d\n",Arr[i]);
        }
        else{
             printf("Number is Odd ==%d\n",Arr[i]);
        }
    
      
    }
    


    return 0;
}
