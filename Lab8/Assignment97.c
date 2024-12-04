#include<stdio.h>

//WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER. 

int main()
{
    char a[100],*p;
    printf("enter the string: ");
    scanf("%[^\n]s",a);
    int count=0;
    for(p=a;*p!='\0';p++){
       if(*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U' ||
          *p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u'){
            count++;
          }
    }
    printf("The number of vowels in string are:%d",count);
    return 0;
}