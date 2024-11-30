#include<stdio.h>

//PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME.

int main()
{
    int s,days,hours,min,sec;
    printf("enter total seconds: ");
    scanf("%d",&s);
    days=s/(24*60*60);
    hours=(s%(24*60*60))/(60*60);
    min=(s%(60*60))/60;
    sec=s%60;
    if(days>0){
    printf("days: %d",days);
    }
    if(hours>0){
    printf("\nhours: %d", hours);
    }
    if(min>0){
    printf("\nminutes: %d",min);
    }
    if(sec>0){
    printf("\nseconds: %d",sec);
    }
    
    return 0;
}