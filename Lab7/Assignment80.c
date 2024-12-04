#include<stdio.h>

//WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUBERS.TEST THE FUNCTION FOR N=5,10,AND 15. 

int fibonacci (int);

int main()
{
    int n;
    printf("enter the number of terms you wanna print:");
    scanf("%d",&n);
    fibonacci(n);
    
    return 0;
}

int fibonacci (int n){
    int a=0,b=1,f;
    printf("fibonacci series is:%d %d ",a,b);
    for(int i=3;i<=n;i++){
        f=a+b;
        printf("%d ",f);
        a=b;
        b=f;
    }
}