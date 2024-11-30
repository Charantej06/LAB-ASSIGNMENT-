#include<stdio.h>
#include<math.h>

/*WRITE A C PROGRAM TO FIND THE VALUE OF Y USING 
Y(x,n)=  1+x       where n=1
         1+x/n     where n=2
         1+x^n     when  n=3
         1 + nx    when n>3 or n<1 */

int main()
{
    float x,n,y;
    printf("enter the value of x: \n");
    scanf("%f",&x);
    printf("enter the value of n: \n");
    scanf("%f",&n);
    if (n==1){
       y=1+x;
    }
    else if (n==2){
       y=(1+x)/n;
    }
    else if (n==3){
       y=1+pow(x,n);
    }
    else if (n>3 || n<1){
       y=1+(n*x);
    }
    printf("the value of Y(x,n) is: %f",y);
    return 0;
}
