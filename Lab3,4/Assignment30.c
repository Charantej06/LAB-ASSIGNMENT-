#include<stdio.h>
#include<math.h>

//PROGRAM TO REVERSE OF A GIVEN NO. 

int main()
{
    int num,t,n=0,a=0,i;
    printf("enter the number: ");
    scanf("%d",&num);

    t=num;
    while(t!=0) {
        t/=10;
        n++;
    }
    t=num;
    while(t!=0) {
        i=t%10;
        a=a+i*(pow(10,n-1));
        t/=10;
        n--;
    }

   /* if(num%10==0) {
        printf("0%d",a);
    } else {
        printf("%d",a);
    }*/
    
    while(num%10==0){
      printf("0");
      num/=10;
    }
    printf("%d",a);
    
    return 0;
    
    
}