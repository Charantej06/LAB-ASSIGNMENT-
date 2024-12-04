// WRITE A  C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE. 
#include<stdio.h>

int main()
{
    FILE *fp=fopen("counting.txt","r");
     int character=0,word=0,line=0;
     char ch;
     while(!feof(fp))
     {
        character++;
        ch=fgetc(fp);
        if(ch==' ')
        {
            word++;
        }
        if(ch=='\n')
        {   word++;
            line++;
        }
     }
     printf("no of characters are %d\nno of words %d\nno of lines %d",character,word+1,line+1);

    return 0;
}