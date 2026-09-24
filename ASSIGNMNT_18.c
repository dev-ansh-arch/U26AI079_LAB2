#include<stdio.h>
int main(){
    int x1,x2,x3;
    printf("enter the 1st number : ");
    scanf("%d",&x1);
    printf("enter the 2nd number : ");
    scanf("%d",&x2);
    printf("enter the 3rd number : ");
    scanf("%d",&x3);
    int max=(x1>x2 && x1>x3)?x1:(x2>x3)?x2:x3;
    printf("the maximun number is %d",max);

    return 0;
}