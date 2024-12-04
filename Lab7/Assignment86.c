#include <stdio.h>
#include<string.h>

//WRITE A FUNCTION TO RADE LINE OF TEXT AND FIND OUT  LENGTH OF STRING. 

int sstrlen(char a[]){
    int i=0,count=0;
       while(a[i]!='\0'){
        count++;
        i++;
       }
       return count;
}
int main() {
    char a[100];
    printf("enter text: ");
    fgets(a,100,stdin);
    printf("the length of the string is:%d",sstrlen(a));
     

return 0;
}