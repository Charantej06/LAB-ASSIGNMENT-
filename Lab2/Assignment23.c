#include<stdio.h>

//PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER FILE(<MATH.H>). 

int main()
{
    double base,power,a=1,b=1;
    
    printf("enter the values in following order\nbase\npower\n");
    scanf("%lf%lf",&base,&power);
    
    if (power>0){
    for(b;a<=power;a++){
       b=b*base;
    }
    printf("ans is: %lf",b);
    }
    return 0;
}