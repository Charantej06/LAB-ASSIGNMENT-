#include<stdio.h>
#include<math.h>

//PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT. 

int main()
{
    int temp,num,n=0,a=0,i;
    printf("enter the number: \n");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
       temp/=10;
       n++;
    }
    temp=num;
    while(temp!=0){
        i=temp%10;
        a=a+pow(i,n);
        temp/=10;
    }
      printf("%d",a);
      if (a==num){
          printf("it is an armstrong");
      }
      else {
          printf("it is not an armstrong");
      }
    return 0;
}