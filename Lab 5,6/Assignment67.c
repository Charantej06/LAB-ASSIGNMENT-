#include<stdio.h>

//PROGRAM TO READ A 3*3 MATRIX AND SUBTRACT THEIR VALUE AND STORE THEM IN THIRD MATRIX. 

int main()
{
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
    
    printf("Enter the elements of 1 matrix\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("a%d%d: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    
    printf("Enter the elements of 2 matrix\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("a%d%d: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    
    printf("Subtraction of two matrix is:\n");
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
          arr3[i][j]=arr1[i][j]-arr2[i][j];
          printf("a%d%d:%d \n",i,j,arr3[i][j]);
       }
    }
    
    
    return 0;
}