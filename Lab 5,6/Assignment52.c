#include<stdio.h>

//pattern 52

int main()
{
    int n;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
       for(int j=1;j<=(n-i);j++){
          printf(" ");
       }
       int k=1;
       for(k;k<=i;k++){
          printf("%d",k);
       }
       for(int l=1;l<k-1;k--){
          printf("%d",k-2);
       }
       printf("\n");
    }
    
    return 0;
}