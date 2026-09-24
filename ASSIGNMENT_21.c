#include<stdio.h>
int main(){
    int a,b;
    float op;
    printf("enter the 1st number : ");
    scanf("%d",&a);
    printf("enter the 2nd number : ");
    scanf("%d",&b);

    char operation;
    printf("enter A for Addition, B for Substraction, C for Multipication, D for Division : ");
    scanf(" %c",&operation);
    switch(operation){
        case 'A':
        op=(a+b);
        printf("SUM=%f",op);
        break;
        case 'B':
        op=a-b;
        printf("DIFFERENCE=%f",op);
        break;
        case 'C':
        op=a*b;
        printf("MULTIPLY=%f",op);
        break;
        case 'D':
        op=a/(b+0.0);
        printf("DIVIDE=%f",op);
        break;
        default:printf("invalid input");


    }
    return 0;
}
