#include<stdio.h>

//PROGRAM TO READ AN ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS.

int main()
{
    int num[10],sum=0;
    for(int i=0;i<10;i++){
       scanf("%d",&num[i]);
       sum=sum+num[i];
    }
    printf("the sum is %d",sum);
    return 0;
}