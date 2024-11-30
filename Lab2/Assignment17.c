#include<stdio.h>

//PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR

int main()
{
    double a,b,c,result;
    printf("enter the numbers:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    
    if((a>b)&&(a>c)){
    result=a;
    }
    else if((b>a)&&(b>c)){
    result=b;
    }
    else {
    result=c;
    }
    printf("%lf is the greatest number", result);
    return 0;
}