#include<stdio.h>

//PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.

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
    int max,min;
    max=arr[0][0];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(max<arr[i][j]) {
                max=arr[i][j];
            }
        }
    }
    printf("maximum element is:%d\n",max);
    min=arr[0][0];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(min>arr[i][j]) {
                min=arr[i][j];
            }
        }
    }
    printf("minimum element is:%d",min);
    return 0;
}