//WRITE A  C PROGRAM TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF TWO GIVEN NUMBERS. 

#include<stdio.h>

#define BIGGEST num1>num2?num1:num2

int main()
{
    int num1,num2;
    int biggest;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&num1,&num2);
    biggest=BIGGEST;
    printf("The bigger number among the 2 given numbers is %d",biggest);
    return 0;
}