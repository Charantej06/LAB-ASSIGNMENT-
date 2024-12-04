#include<stdio.h>

/*PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDiTION OF THOSE 
ARRAYS INTO THIRD.*/

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
      arr3[i]=arr2[i]+arr1[i];
    }
    for(int i=0;i<10;i++){
      printf("The array 3 elements are: %d\n",arr3[i]);
    }
    return 0;
}