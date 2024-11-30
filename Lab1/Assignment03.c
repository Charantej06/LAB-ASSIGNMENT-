#include<stdio.h>

//PROGRAM TO CALCULATE GROSS SALARY. 


int main()
{
    float salary,sideincome,bonus;
    printf("enter the salary: ");
    scanf("%f",&salary);
    printf("enter the side income: ");
    scanf("%f",&sideincome);
    printf("enter the bonus: ");
    scanf("%f",&bonus);
    
    printf("Your gross income is %f", salary+sideincome+bonus);
    
    
    return 0;
}