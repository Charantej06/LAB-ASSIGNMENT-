#include<stdio.h>

//READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N 

int sum(int num);

int sum(int num){
   int i,a=0;
   while(num!=0){
     i=num%10;
     a=a+i;
     num/=10;
   }
   /*if (a>=10){
      sum(a);
   }*/
   
   return a;
}

int main()
{
    int num,c;
    printf("enter the number: ");
    scanf("%d",&num);
   // printf("%d",sum(num));
   c=sum(num);
   while(c>=10){
     c=sum(c);
   }
    printf("The single digit number is %d\n",c);
    return 0;
}