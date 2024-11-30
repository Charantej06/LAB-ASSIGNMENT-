#include<stdio.h>

//PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE. 


int main() {
    double sub1,sub2,sub3,sub4,sub5;
    printf("enter marks of sub1: ");
    scanf("%lf",&sub1);
    printf("enter marks of sub2: ");
    scanf("%lf",&sub2);
    printf("enter marks of sub3: ");
    scanf("%lf",&sub3);
    printf("enter marks of sub4: ");
    scanf("%lf",&sub4);
    printf("enter marks of sub5: ");
    scanf("%lf",&sub5);
    
   double totalmarks= sub1+sub2+sub3+sub4+sub5;
    
    printf("Your total marks are %.2lf");
    printf("\nYour total percentage is %.2lf", (totalmarks/500)*100);
    


   return 0;
   }