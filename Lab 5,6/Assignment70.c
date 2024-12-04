#include<stdio.h>

//PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR ELEMENT IN THE ARRAY. 

int main()
{
    int n,search,count=0;
    
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    
    printf("Enter the element to search for:");
    scanf("%d",&search);
    
    for(int i=0;i<n;i++){
        if(arr[i]==search){
          count++;
        }
    }
    
    if(count==0){
      printf("The element you searched is not in array\n");
    }
    else{
       printf("The element you searched is occured %d times",count);
    }    
    return 0;
}