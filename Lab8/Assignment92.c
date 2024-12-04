#include<stdio.h>

/*WRITE A C PROGRAM USING POINTERS TO 
FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.*/

int main()
{
    int n,*p;
    printf("How many numbers do you want to enter:");
    scanf("%d",&n);
    int a[n];
    printf("enter the numbers:\n");
    for(p=a;p<=(a+n-1);p++){
      scanf("%d",p);
    }
    int max=a[0];
    for(p=a;p<=(a+n-1);p++){
      if(*p>max){
        max=*p;
      }
    }
    printf("The maximum number is %d",max);
    return 0;
}