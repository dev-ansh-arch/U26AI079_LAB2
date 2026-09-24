#include<stdio.h>
int main(){
    int a,b,power=1;
    printf("enter the 1st number : ");
    scanf("%d",&a);
    printf("enter the 2nd number : ");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        power=power*a;
    }

    printf("the power of %d raised to power %d is %d",a,b,power);
    return 0;
}