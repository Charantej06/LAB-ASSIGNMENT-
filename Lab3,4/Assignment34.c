#include<stdio.h>

//PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…) 

int main()
{
  int n,a=0,b=1,fib;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("The fibonacci series upto n is %d,%d,",a,b);
  for(int i=3;i<=n;i++)
  {
    fib=a+b;
    printf("%d,", fib);
    a=b;
    b=fib;
  }
  return 0;
}
 