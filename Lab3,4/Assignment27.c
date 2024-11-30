#include<stdio.h>

//PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT. 

int main()
{
    int num,i=2,count=0;
    printf("enter the number: ");
    scanf("%d",&num);
    
    while(num%i!=0){
       count++;
       i++;
    }
    
     if(count==(num-2)){
        printf("it is an prime number");
     } 
     else{
        printf("it is not an prime number");
     }
    return 0;
}