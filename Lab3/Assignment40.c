#include<stdio.h>

/*READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED
 AND CALCULATE SUM OF A LIST OF NUMBERS READ. */

int main()
{
    int num,a=0;
    printf("Enter the numbers: \n");
    
    while(1){
      scanf("%d",&num);
      if(num<0){
         break;
      }
      a+=num;
    }
    printf("The sum is %d",a);
    return 0;
}