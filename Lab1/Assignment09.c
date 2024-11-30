#include<stdio.h>

//PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND. 

int main()
{
    int hr,min,sec,Tot_sec;
    printf("enter the values in the following order");
    printf("\nhours");
    printf("\nminutes");
    printf("\nsec\n\n");
    scanf("%d%d%d",&hr,&min,&sec);
    Tot_sec=((hr*60*60)+(min*60)+sec);
    printf(" Total seconds are: %d",Tot_sec);
    return 0;
}