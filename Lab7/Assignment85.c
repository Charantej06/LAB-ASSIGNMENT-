#include<stdio.h>

//WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT. 

int character (char);

int main()
{
    char a;
    printf("enter the character:");
    scanf("%c",&a);
    if(a<97){
      a+=32;
    }
    int c=character(a);
    if(c==1){
      printf("it is a vowel");
    }
    else{
      printf("it is not a vowel");
    }
    return 0;
}
int character (char a){
   if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
     return 1;
   }
   else{
     return 0;
   }
}