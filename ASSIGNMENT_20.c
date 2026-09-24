#include<stdio.h>
int main(){
    int a,b;
    float op;
    printf("enter the 1st number : ");
    scanf("%d",&a);
    printf("enter the 2nd number : ");
    scanf("%d",&b);

    int operation;
    printf("enter 1 for Addition, 2 for Substraction, 3 for Multipication, 4 for Division : ");
    scanf(" %d",&operation);
    switch(operation){
        case 1:
        op=a+b;
        printf("SUM=%f",op);
        break;
        case 2:
        op=a-b;
        printf("DIFFERENCE=%f",op);
        break;
        case 3:
        op=a*b;
        printf("MULTIPLY=%f",op);
        break;
        case 4:
        op=a/(b+0.0);
        printf("DIVIDE=%f",op);
        break;
        default:printf("invalid input");


    }
    return 0;
}