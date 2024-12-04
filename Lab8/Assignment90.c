#include<stdio.h>

/*WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING 
INCLUDING AND EXCLUDING SPACES USING POINTERS. */

int main()
{
    char name[100],*p;
    printf("enter the string:");
    scanf("%[^\n]s",name);
    int x=0,y=0;
    for(p=name;*p!='\0';p++){
       x++;
       if(*p==' '){
         y++;
       }
    }
    printf("the length of string including spaces are:%d\n",x);
    printf("the length of string excluding spaces are:%d\n",x-y);
    
    return 0;
}