#include<stdio.h>

//PROGRAM TO CALCULATE AREA OF A TRIANGLE. 

int main() {

    double base,height;
    printf("enter the height: ");
    scanf("%lf",&height);
    printf("enter the base: ");
    scanf("%lf",&base);
    
    printf("Area of triangle is: %lf",(base*height));
    
    return 0;
}