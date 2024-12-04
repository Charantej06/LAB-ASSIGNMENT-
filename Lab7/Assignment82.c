#include<stdio.h>

//WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS. NCR = (!N/(!R*!(N-R))); 

int factorial (int);

int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int c=factorial (num);
    printf("factorial is:  %d",c);
    return 0;
}
int factorial (int num){
    if(num==1){
      return 1;
    }
    return factorial(num-1)*num;
}