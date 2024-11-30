#include<stdio.h>

//PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING ARITHMETIC OPERATOR)AND THIS  PERFORM USING SWITCH-CASE.(CASE IN CHAR FORM). 

int main()
{
  int a,b;
  char operation;
  printf("Enter the numbers: ");
  scanf("%d %d", &a, &b);
  printf("Enter the desired operation:(s for sum,d for difference,p for product,q for quotient, r for remainder):");
  scanf(" %c", &operation);
  switch(operation)
  { case 's': printf("The sum of the two numbers is %d", a+b); 
            break;
    case 'd': printf("The difference of the two numbers is %d", a-b); 
            break;
    case 'p': printf("The product of the two numbers is %d", a*b); 
            break;
    case 'q': if(b!=0)
             printf("The quotient is %d", a/b);
            else
             printf("Error the divisor cannot be 0");
            break;
    case 'r': if(b==0)
               printf("Error! The divisor cannot be 0");
              else 
               printf("The remainder is %d", a%b);
              break;
    default: printf("Error! Please Enter the correct operation from the list");
   }
  return 0;       
   
}