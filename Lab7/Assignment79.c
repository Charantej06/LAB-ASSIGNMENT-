#include<stdio.h>

//WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y . 
 
void interchange (int *a, int *b);

int main()
{
    int x,y;
    printf("enter the numbers:");
    scanf("%d%d",&x,&y);
    printf("The numbers before interchange are %d %d\n",x,y);
    interchange(&x,&y);
    printf("The numbers after interchange are %d %d",x,y);
    return 0;
}

void interchange (int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
