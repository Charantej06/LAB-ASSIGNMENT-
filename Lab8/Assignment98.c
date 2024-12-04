//WRITE A C PROGRAM TO FIND THE PRODUCT OF 2 MATRICES USING POINTER USING DYNAMIC MEMORY ALLOCATION

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int row1,col1,row2,col2;
    input: printf("Enter the row size and column size of 1st matrix: ");
    scanf("%d %d",&row1,&col1);
    printf("Enter the row size and column size of 2nd matrix: ");
    scanf("%d %d",&row2,&col2);
    if(col1!=row2)
    {
        printf("Error!The column of matrix 1 and row of matrix 2 should be same!\n\n");
        goto input;
    }

    int* ptr1=(int*)calloc(row1*col1,sizeof(int));             //Memory Allocation
    int* ptr2=(int*)calloc(row2*col2,sizeof(int));
    int* result=(int*)calloc(row1*col2,sizeof(int));

    printf("\nEnter the matrix 1:\n");
    for(int i=0;i<row1*col1;i++)
        scanf("%d",(ptr1+i));
    
    printf("\nEnter the matrix 2:\n");
    for(int i=0;i<row2*col2;i++)
        scanf("%d",(ptr2+i));
    
    for(int i=0;i<row1;i++)                       //MATRIX MULTIPLICATION
        for(int j=0;j<col2;j++)
            for(int k=0;k<col1;k++)
                *(result + i * col2 + j)+= *(ptr1+ i * col1 + k) * *(ptr2+ k * col2 + j);

    printf("\nThe result matrix is:\n");          //PRINTING RESULT MATRIX
    for(int i = 0; i < row1; i++) 
    {
        for (int j = 0; j < col2; j++) 
        {
            printf("%d ", *(result+ i * col2 + j));
        }
        printf("\n");
    }
    
    return 0;
}
