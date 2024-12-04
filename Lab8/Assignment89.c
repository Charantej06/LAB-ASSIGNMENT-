#include<stdio.h>

/*WRITE A PROGRAM  TO COPY  ONE ARRAY INTO ANOTHER ARRAY .
ORDER OF ELEMENTS OF SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY. */

int main()
{
    int a1[5]={1,2,3,4,5},a2[5]={0,0,0,0,0},*p;
    printf("elements of array 1 are:");
    for(int i=0;i<5;i++){
        printf("%d ",a1[i]);
    }
    printf("\nelements af array 2 are:");
    for(int i=0;i<5;i++){
        printf("%d ",a2[i]);
    }
    int i=0;
    for(p=a1;p<=(a1+4);p++){
        a2[5-i-1]=*p;
        i++;
    }
    printf("\nelements of array 2 after copying:");
    for(int i=0;i<5;i++){
        printf("%d ",a2[i]);
    }
    
    
    return 0;
}