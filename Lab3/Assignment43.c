#include<stdio.h>

/*WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW. 
If    sales<=Rs. 500, commission is 5%
If    sales> 500 but <=2000, commission is Rs. 35 plus 10% above Rs. 500      
If    sales>2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000      
If    sales>5000, commission is 12.5% */

int main()
{
    float sales;
    printf("Enter the sales: ");
    scanf("%f",&sales);
    
    if(sales<0){
       printf("invalid input");
    }
    else if(sales<=500){
       printf("your commission is %.2f",(0.05*sales) );
    }
    else if(sales<=2000){
       printf("your commission is %.2f", 35+((sales-500)*0.1));
    }
    else if(sales<=5000){
       printf("your commission is %.2f",185+(0.12*(sales-2000)) );
    }
    else{
       printf("your commission is %.2f",(0.125*sales) );
    }
    
    return 0;
}