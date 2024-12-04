#include<stdio.h>

//PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS

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
    
    for(int i=0;i<3;i++){
       int sum=0;
       for(int j=0;j<3;j++){
         sum+=arr[i][j];
       }
       printf("sum of row%d is:%d\n",(i+1),sum);
    }
    
    
    return 0;
}