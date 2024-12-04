#include<stdio.h>

//PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY. 

int main()
{   int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    
    int arr[n],s;
    
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    
    printf("Enter the element you want to search:");
    scanf("%d",&s);
    int i;
    for(i=0;i<n;i++){
       if(s==arr[i]){
         break;
       }
    }
    
    
    
    if(i==n){
      printf("Searched element is not in array");
    }
    else{
      printf("Searched element is at index %d",i);
    }
    return 0;
}