#include<stdio.h>

/*WRITE A PROGRAM IN C FOR THE FOLLOWING. 
   AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS FOLLOWS. 
           Consumption in unit   Rate for Charge 
            0-200                Re 0.50 per unit
            201-400              Rs 100 plus Rs 0.65 per unit excess of 200
            401-600              Rs 230 plus Rs 0.85 per unit excess of 400
            above 600            Rs 425 plus Rs 1.25 per unit excess of 600
            
            Print the amount to be paid by the consumer. */

int main()
{
    float unit;
    printf("Enter the consumed units: ");
    scanf("%f",&unit);
    
    if(unit<=0){
      printf("Invalid input");
    }
    else if (unit<=200){
      printf("The amount need to be paid is %f",unit*0.5);
    }
    else if(unit<=400){
       printf("The amount need to be paid is %f",100+((unit-200)*0.65));
    }
    else if(unit<=600){
       printf("The amount need to be paid is %f",230+((unit-400)*0.8));
    }
    else{
       printf("The amount need to be paid is %f",425+((unit-600)*1.25));
    }
    return 0;
}