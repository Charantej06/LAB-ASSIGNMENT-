#include<stdio.h>

//PROGRAM TO CALCULATE FACTORIAL OF A NO. 

int main()
{
    int fac,i=1;
    printf("enter the number: ");
    scanf("%d",&fac);
    for(fac;fac>0;fac=fac-1){
    i=i*fac;
    }
    printf("%d",i);
    return 0;
}