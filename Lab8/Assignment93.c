#include<stdio.h>

//WRITE A C PROGRAM  USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.

int main()
{
    char str[100],*p;
    printf("enter the string: ");
    scanf("%[^\n]s",str);
    int x=0;
    for(p=str;*p!='\0';p++){
      if(*p==32){
        x++;
      }
    }
    printf("The number of words in given string are:%d",x+1);
    return 0;
}