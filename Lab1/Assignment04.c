#include<stdio.h>
 
 //Conversion of temperature from fahrenheit to centigrade degrees
 
 int main()  {
     double degree;
     printf("enter the fahrenheit value: ");
     scanf("%lf",&degree);
     printf("Centigrade degree is %.2lf",(5/9)*(degree-32));
     
 
 
      return 0;
      }