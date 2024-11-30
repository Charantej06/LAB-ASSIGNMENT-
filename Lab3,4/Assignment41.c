#include<stdio.h>

//READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28) 

int main()
{
    int num,i=1;
    printf("enter the number: ");
    scanf("%d",&num);
   if(num>0){
    printf("The factors are:  ");
    while(num!=0 && i<=num){
        if(num%i==0){
            printf("%d,",i);
        }
        i++;
    }
    }
    else{
      printf("invalid input");
    }
    return 0;
}