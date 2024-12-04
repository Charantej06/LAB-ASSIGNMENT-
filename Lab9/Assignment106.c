#include<stdio.h>

/*CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY, 

PRICE AND

AMOUNT. IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND 

PRICE AS

INPUT AND CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT.*/

struct ITEM {
  char item_name[100];
  int quantity;
  float price;
  float amount;
};

float amt (struct ITEM a){
   printf("enter the item name:");
   scanf("%[^\n]s",a.item_name);
   printf("enter the quantity,price of item:");
   scanf("%d %f",&a.quantity,&a.price);
   a.amount=a.quantity*a.price;
   return a.amount;
}

int main()
{   struct ITEM a;
    float b=amt(a);
    printf("amount is %f",b);
    return 0;
}
