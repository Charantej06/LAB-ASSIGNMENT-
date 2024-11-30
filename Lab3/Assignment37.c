#include<stdio.h>

//PROGRAM TO PRINT 2,4,6,8,10,12………N. 

int main()
{
    int num,i=2;
    printf("enter the number N: ");
    scanf("%d",&num);
    if (num<=1){
      printf("invalid input\n");
    }
    
    while(i<=num){
       if (i==(num-1) || i==num){
          printf("%d.",i);
          break;
       }
       printf("%d,",i);
       i+=2;
    }
    return 0;
}