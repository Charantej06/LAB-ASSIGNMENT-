//WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int *ptr=&num;
    printf("\nThe square of the given number is %d",(*ptr)*(*ptr));
    printf("\nThe cube of the given number is %d",(*ptr)*(*ptr)*(*ptr));
    return 0;
}
