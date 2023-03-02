#include <stdio.h>

int main()
{
    int arr[100],n,j,i,max1,max2;
    
    printf("Enter the array size ");
    scanf("%d",&n);
    
    printf("Enter the array elements ");
    for(j=0; j<n; j++){
    	scanf("%d",&arr[j]);
	}
    
         max1= max2 =0;
    for(i=0; i<5; i++)
    {
        if(arr[i] > max1)
        {
            
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    printf("First largest = %d\n", max1);
    printf("Second largest = %d", max2);

    return 0;
}
