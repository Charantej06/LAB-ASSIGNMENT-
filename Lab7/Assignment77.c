#include<stdio.h>

//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT. 

void palindrome(){
   int n,temp,count,a=0,b;
   printf("Enter the number:");
   scanf("%d",&n);
   
   temp=n;
   
   while(temp){
      temp/=10;
      count++;
   }
   temp=n;
   
   for(int i=1;i<=count;i++){
      b=temp%10;
      a=(10*a+b);
      temp/=10;
   }
   
   if(a==n){
     printf("The number is palindrome");
   }
   else{
     printf("Thee number is not a palindrome");
   }
}

int main()
{
    palindrome();
    return 0;
}