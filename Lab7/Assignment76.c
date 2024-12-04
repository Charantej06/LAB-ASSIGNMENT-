#include<stdio.h>

//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD. 

void evenodd(){

    int n;
    printf("enter the number:");
    scanf("%d",&n);
    
    if(n==0){
     printf("The number is neither even nor odd");
   }
   else if(n%2==0){
     printf("The number is even number");
   }
   
   else{
     printf("The number is odd");
   }
}

int main()
{
    evenodd();
    return 0;
}
