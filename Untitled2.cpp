#include <stdio.h>
int main() {
    int n,a,b,c,d,sum;
    printf("Enter the NUmber");
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    c=b%10;
    d=b/10;
    sum = a+c+d;
     printf("value of Digits==%d\n",sum);
    return 0;
}
