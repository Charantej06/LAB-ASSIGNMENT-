#include<stdio.h>

//PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR NOT USING CONDATIONAL OPERATOR. 

int main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    (ch>=97 && ch<=122)? printf("it is a small case letter\n"): printf("it is not a small case letter");
    return 0;
}