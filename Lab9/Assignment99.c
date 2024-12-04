//WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS PRESENT IN THE FILE

#include<stdio.h>

#define R read[i]==

int main()
{
    FILE *fptr1=fopen("CountVowels.txt","w");         //Creating A FIle
    char text[100];
    printf("Enter the text to entered into the file: ");
    scanf(" %[^\n]s",text);
    fputs(text,fptr1);
    fclose(fptr1);

    FILE *fptr2=fopen("CountVowels.txt","r");             //Reading From the file
    char read[100];
    int vowels=0;
    fgets(read,100,fptr2);
    for(int register i=0;read[i]!='\0';i++)
    {
        if(R'A'||R'E'||R'I'||R'O'||R'U'||R'a'||R'e'||R'i'||R'o'||R'u')
            vowels+=1;
    }
    printf("The number of vowels in the file is %d",vowels);
    return 0;
}