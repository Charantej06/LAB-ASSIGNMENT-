#include<stdio.h>

/*PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE 
ARRAYS.*/

int main()
{
    int arr1[10],arr2[10],arr3[10];
    
    printf("Enter the elements of array 1:\n");
    for(int i=0;i<10;i++){
      scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of array 2:\n");
    for(int i=0;i<10;i++){
      scanf("%d",&arr2[i]);
    } 
    for(int i=0;i<10;i++){
       arr3[i]=arr1[i];
       arr1[i]=arr2[i];
       arr2[i]=arr3[i];
    }
    printf("The elements of array 1 are: \n");
    for(int i=0;i<10;i++){
      printf("%d\n",arr1[i]);
    }
    printf("The elements of array 2 are: \n");
    for(int i=0;i<10;i++){
      printf("%d\n",arr2[i]);
    }  
    return 0;
}