#include<stdio.h>

//pattern 48

int main()
{
    int n;
    printf("Ener the number of rows:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
       for(int j=1;j<=(n-i);j++){
          printf(" ");
       }
       
       int a=0;
       for(int k=1;k<=i;k++){
          a=a*10+k;
       }
       printf("%d\n",a);
    }   
    return 0;
} 