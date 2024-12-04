#include<stdio.h>

// calculation of simple intrest

int main()
{
    
    double a,b,c;
    printf("enter the principle value: ");
    scanf("%lf",&a);
    printf("enter the time: ");
    scanf("%lf",&b);
    printf("rate of intrest: ");
    scanf("%lf",&c);
    printf("simple intrest is: %lf",(a*b*c)/100);
    
    
    return 0;
}
