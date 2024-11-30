#include<stdio.h>

//PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N. 

int main()
{
    int num,i;
    printf("Enter the nth term: ");
    scanf("%d",&num);
    
    if(num<=0){
       printf("invalid input");
    }
    else{
    
    for(i=1;i<num;i++){
       printf("%d/%d!+",i,i);
    }
    printf("%d/%d!",num,num);
    }
    return 0;
}