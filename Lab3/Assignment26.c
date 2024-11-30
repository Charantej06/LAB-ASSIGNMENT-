#include<stdio.h>

//PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W  1 TO N. 

int main()
{
    int n,sum1=0,sum2=0,a=2,b=1;
    printf("enter the number: \n");
    scanf("%d",&n);
    
    while(a<=n){
        sum1=sum1+a;
        a=a+2;
    }
    while(b<=n){
        sum2=sum2+b;
        b=b+2;
    }
    printf("Sum of all even numbers upto %d: %d\n",n,sum1);
    printf("Sum of all odd numbers upto %d: %d\n",n,sum2);
    return 0;
}