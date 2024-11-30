#include<stdio.h>

//PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT. 


int main()
{
    int num,a=0,i,t,n=0;
    printf("enter the number: ");
    scanf("%d",&num);
    
    
    t=num;
    while(t!=0){
       i=t%10;
       a=a*10+i;
       t/=10;
    }
    
    if(a==num){
       printf("it is an palindrome");
    }
    else{
      printf("it is not an palindrome");
    }
    
    return 0;
}