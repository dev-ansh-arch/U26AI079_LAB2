#include<stdio.h>
int main(){
    int x;
    printf("enter the number : ");
    scanf("%d",&x);
    if(x%2==0) 
    printf("the given number %d is EVEN",x);
    
    else 
    printf("the given number %d is ODD",x);
    return 0;
}