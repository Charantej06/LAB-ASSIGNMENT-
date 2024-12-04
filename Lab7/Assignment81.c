#include<stdio.h>

//WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN ZERO OTHERWISE. 

int prime (int);

int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int c=prime(num);
    printf("%d",c);
    return 0;
}
int prime (int num){
  int count=0;
  for(int i=1;i<=num;i++){
     if(num%i==0){
        count++;
     }
  }
  if(count==2){
    return 1;
  }
  else{
     return 0;
  }
}