#include<stdio.h>

//PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE. 

int main()
{
    int arr[3][3];
    printf("Enter the elements\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("a%d%d: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The original matrix A is:");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%d",arr[i][j]);
        }
        printf("\n");
        printf("                         ");
    }
    
    printf("\nThe Transpose matrix of A is:");
    for(int i=0; i<3; i++) {
    
        for(int j=0; j<3; j++) {
            printf("%d",arr[j][i]);
        }
        printf("\n");
        printf("                             ");
    }
    
    return 0;
}