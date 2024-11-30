#include<stdio.h>
#include<math.h>

//PROGRAM TO PRINT 1,4,9,16,25,………N. 

int main()
{
    int num,i=0,a=0;
    printf("enter the number N: ");
    scanf("%d",&num);
    if (num<=0){
      printf("invalid input\n");
    }
    
    while(a<num){
        i++;
        a=pow(i,2);
        
        if(a>num){
           break;
        }
        else{
        printf("%.0lf,",a);
        }
        
    }
    
    return 0;
}