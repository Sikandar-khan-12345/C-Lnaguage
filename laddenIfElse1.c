#include <stdio.h>

int main() { 
    int a;
    printf("Enter the Number\n");
    scanf("%d",&a);
    if(a==1){
        printf("Sunday");
    }else if(a==2){
        printf("Monday");
    }
    else if(a==3){
        printf("thuesday");
    }
    else if(a==4){
        printf("Wednesday");
    }
    else if(a==5){
        printf("thuresday");
    }
    else if(a==6){
        printf("Friday");
    }
    else if(a==7){
        printf("Saturaday");
    }
    else{
        printf("No A Day");
    }
    return 0;
}
