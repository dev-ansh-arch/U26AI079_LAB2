#include<stdio.h>
int main(){
    char c;
    printf("enter a character : ");
    scanf("%c",&c);
    if(c>=97 && c<=122) printf("the entered character %c is in small caps",c);
    else printf("the entered character %c is not in small caps",c);
    return 0;
}