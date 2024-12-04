#include<stdio.h>

//PROGRAM TO REVERSE AN ARRAY

int main()
{
    int n,temp;
    
    printf("Number of elements does array contain: ");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<(n/2);i++){
      temp=arr[i];
      arr[i]=arr[n-1-i];
      arr[n-1-i]=temp;
    }
    
    printf("Reverse of array is:\n");
    for(int i=0;i<n;i++){
      printf("%d\n",arr[i]);
    }
    
    return 0;
}