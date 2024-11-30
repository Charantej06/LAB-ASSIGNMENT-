#include<stdio.h>

//PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) OPERATOR. 

int main()
{
    double a,b,c;
    printf("enter the numbers:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    (a>b)?(a>c)?printf("the greatest number is %lf",a):printf("the greatest number is %lf",c):(b>c)?printf("the greatest number is %lf",b):printf("the greatest number is %lf",c);
    return 0;
}