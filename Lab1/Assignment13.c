#include<stdio.h>

//PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD. 

int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    if(num%2==0){
    printf("The given number is even");
    }
    else{
    printf("The given number is odd");
    }
    return 0;
}