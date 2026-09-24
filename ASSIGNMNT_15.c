#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    double percentage;
    printf("enter the marks in five subjects : ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    percentage=(m1+m2+m3+m4+m5)/5.0;
    if(percentage>=80) 
    printf("FIRST DIVISION");

    else if(percentage>=60) 
    printf("SECOND DIVISION");

    else if(percentage>=50) 
    printf("THIRD DIVISION");

    else if(percentage>=40) 
    printf("FOURTH DIVISION");
    
    else printf("FAIL");
    return 0;

}