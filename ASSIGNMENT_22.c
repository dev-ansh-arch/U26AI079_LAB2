#include<stdio.h>
int main(){
    int n,factorial=1;
    printf("enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("the factorial of %d is %d ",n,factorial);
    return 0;
}