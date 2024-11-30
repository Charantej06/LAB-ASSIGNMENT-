#include<stdio.h>

//READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE. 

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
        printf("it is a composite number");
     }
    return 0;
}