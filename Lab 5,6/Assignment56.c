#include<stdio.h>

/*PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE, 
NEGATIVE, AND ZERO ELEMENTS.*/

int main()
{
    int num[10],count1=0,count2=0;
    printf("Enter the numbers: \n");
    for(int i=0;i<10;i++){
       scanf("%d",&num[i]);
       if(num[i]>0){
          count1++;
       }
       else if(num[i]<0){
          count2++;
       }
    }
    printf("The number of positive integers are: %d\n",count1);
    printf("The number of negative integers are: %d\n",count2);
    printf("The number of zero elements are: %d",(10-count1-count2));
    
    
    return 0;
}