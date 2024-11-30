#include<stdio.h>

// PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO

int main()
{
    int num,a=0,i;
    printf("enter the number: ");
    scanf("%d",&num);
    
    if(num<0){
      num=-num;
    }
    
    while(num!=0){
      i=num%10;
      a=a+i;
      num/=10;
    }
    
    printf("%d",a);
    
    return 0;
}