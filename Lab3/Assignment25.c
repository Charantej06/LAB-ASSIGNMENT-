#include<stdio.h>

//PROGRAM TO PRINT TABLE OF ANY NO.

int main()
{
    int num,i=1;
    printf("enter the number: ");
    scanf("%d",&num);
    
    while(i<=10){
        printf("%d*%d=%d\n",num,i,num*i);
        i++;
    }
    return 0;
}