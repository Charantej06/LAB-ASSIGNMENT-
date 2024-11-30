#include<stdio.h>

//EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES 

int main()
{
    int sec=31558150,days,hours,minutes,a;
    days=(sec/(24*60*60));
    hours=((sec%(24*60*60))/(60*60));
    minutes=((sec%(60*60))/60);
    printf("days: %d", days);
    printf("\nhours: %d", hours);
    printf("\nminutes: %d", minutes);
    
    
    
    return 0;
}