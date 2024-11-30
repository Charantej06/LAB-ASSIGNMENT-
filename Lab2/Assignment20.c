#include<stdio.h>

//PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE. 

int main()
{
  int a,b, operation;
  printf("Enter the numbers: ");
  scanf("%d %d", &a, &b);
  printf("Enter the desired operation:(1 for sum,2 for difference,3 for product,4 for quotient, 5 for remainder): ");
  scanf(" %d", &operation);
  switch(operation)
  { case 1: printf("The sum of the two numbers is %d", a+b); 
            break;
    case 2: printf("The difference of the two numbers is %d", a-b); 
            break;
    case 3: printf("The product of the two numbers is %d", a*b); 
            break;
    case 4: if(b!=0)
             printf("The quotient is %d", a/b);
            else
             printf("Error the divisor cannot be 0");
            break;
    case 5: if(b==0)
               printf("Error! The divisor cannot be 0");
              else 
               printf("The remainder is %d", a%b);
              break;
    default: printf("Error! Please Enter the correct operation from the list");
   }
  return 0;       
   
}