#include<stdio.h>

//PROGRAM TO PRINT 1,3,5,7,9………N. 

int main()
{
    int num,i=1;
    printf("enter the number N: ");
    scanf("%d",&num);
    if (num<=0){
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