#include<stdio.h>

//PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL CASE LETTER, A DIGIT OR A SPECIAL SYMBOL. 

int main()
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if(ch>127 || ch<32){
    printf("invalid input");
    }
    else if(ch>=97 && ch<=122){
    printf("it is an lower case letter");
    }
    else if(ch>=65 && ch<=90){
    printf("it is an upper case letter");
    }
    else if(ch>=48 && ch<=57){
    printf("it is a digit");
    }
    else {
    printf("it is an special symbol");
    }
    printf("\nit's ASCII value is %d",ch);
    return 0;
}