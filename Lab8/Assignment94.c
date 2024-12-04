#include<stdio.h>
#include<string.h>

/*WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE
 USING POINTERS.FOR EXAMPLE, */

int main()
{
    char a[100],b[100],*p;
    printf("enter the string: ");
    scanf("%[^\n]s",a);
    int n=strlen(a);
    printf("original string is:%s\n",a);
    int i=0;
    for(p=a;*p!='\0';p++){
       b[n-i-1]=*p;
       i++;
    }
    b[n]='\0';
    printf("reversed string is:%s\n",b);
    return 0;
}