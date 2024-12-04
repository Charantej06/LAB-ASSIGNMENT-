#include<stdio.h>

/*IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER
 AS INPUT AND FLIP ITS LAST N DIGITS */

int check (int,int);

int main()
{
    int num,n;
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter the value of n:");
    scanf("%d",&n);
    int c=check(num,n);
    printf("%d",c);
    return 0;
}

int check (int num,int n){
    int a=0,temp,temp1;
    int result;
    temp=num;
    for(int i=1;i<=n;i++){
       int j=temp%10;
       a=a*10+j;
       temp/=10;
    }
    temp1=num/pow(10,n);
    result=temp1*pow(10,n)+a;
    return result;
}