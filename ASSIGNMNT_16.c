#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter the first number : ");
    scanf("%d",&x);
    printf("enter the second number : ");
    scanf("%d",&y);
    printf("enter the third number : ");
    scanf("%d",&z);
    if(x>y){
        if(x>z) printf("the max number is %d",x);
        else printf("the max number is %d",z);
    }
    else{
        if(y>z) printf("the max number is %d",y);
        else printf("the max number is %d",z);

    }
    return 0;
}