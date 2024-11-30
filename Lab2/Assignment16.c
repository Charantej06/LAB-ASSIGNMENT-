#include<stdio.h>

//PROGRAM TO READ THREE NOS. AND PRINT MAX. 

int main()
{
    double a,b,c;
    printf("enter the numbers: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>b){
       if(a>c){
       printf("%lf is the greatest number",a);
       
       }
       else{
       printf("%lf is the greatest number",c);
       }
    }
    else{
       if(b>c){
       printf("%lf is the greatest number",b);
       }
       else{
       printf("%lf is the greatest number",c);
       }
       
    }
    return 0;
}