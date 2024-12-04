#include<stdio.h>
#include<math.h>

//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT. 

void Armstrong(){
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
      a+=pow(b,count);
      temp/=10;
   }
   
   if(a==n){
     printf("The number is Armstrong");
   }
   else{
     printf("Thee number is not a Armstrong");
   }
}

int main()
{
    Armstrong();
    return 0;
}