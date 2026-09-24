#include<stdio.h>
int main(){
    char x;
    printf("enter the charcater : ");
    scanf("%c",&x);
    if(x>=65 && x<=90)
    printf("the given charcter %c is CAPITAL LETTER",x);
    else if(x>=97 && x<=122)
    printf("the given charcter %c is SMALL LETTER",x);
    else if(x>=49 && x<=57)
    printf("the given charcter %c is DIGITS",x);
    else
    printf("the given charcter %c is a SPECIAL SYMBOL",x);
    return 0;
}