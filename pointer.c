#include <stdio.h>

int main() {
    int a=10,b=20,p,*q;
     p = &a;
     q =&a;
    printf("value of a ==%d\n",a);
    printf("value of b ==%d\n",b);
    printf("value of c ==%d\n",p);
  printf("value of q ==%d\n",*q);
    return 0;
}
