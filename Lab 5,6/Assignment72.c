#include<stdio.h>

//Write a program in C to rotate an array by N positions. 

int main()
{ 
    int size,n;
    printf("How many numbers you want to enter:");
    scanf("%d",&size);
    
    int a[size],temp[size];
    printf("Enter the numbers\n");
    for(int i=0;i<size;i++){
       scanf("%d",&a[i]);
     } 
    
    printf("Enter the number of rotations:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
       for(int j=0;j<size;j++){
         temp[j]=a[j];
       }
       for(int k=1;k<size;k++){
          a[k]=temp[k-1];
       }
       a[0]=temp[size-1];
    }
    for(int i=0;i<size;i++){
       printf("%d",a[i]);
     } 
     
    return 0;
}