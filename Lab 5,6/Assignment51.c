#include<stdio.h>

//pattern 51

int main()
{
    int n;
    printf("Enter the number is rows:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
       for(int j=1;j<i;j++){
          printf("0");
       }
       printf("1");
       for(int k=1;k<=(n-i);k++){
           printf("0");
       }
       printf("\n");
    }
    return 0;
}