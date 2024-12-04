#include<stdio.h>

//pattern 50

int main()
{
    int n; 
    char ch='A';
    printf("Ener the number of rows:");
    scanf("%d",&n);
    
    if(n>26 || n<1){
      printf("invalid number");
    }
    else{
    for(int i=1;i<=n;i++){
        
       for(int j=1;j<=i;j++){
           printf("%c",ch);
       }
       ch++;
       printf("\n");
       }
    }  
    return 0;
} 