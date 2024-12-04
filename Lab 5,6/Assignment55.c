#include<stdio.h>

/*PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND 
TOTAL NO. OF EVERY ELEMENT.*/

int main()
{
    int num[10],count=0,j=10;
    printf("Enter the numbers: \n");
    for(int i=0;i<j;i++){
       scanf("%d",&num[i]);
       if(num[i]<=0){
         printf("invalid input\n");
         j++;
         continue;
       }
       if(num[i]%2==0){
         count++;
       }
    }
    printf("The number of even numbers are: %d\n",count);
    printf("The number of odd numbers are: %d",(10-count));
    
    return 0;
}