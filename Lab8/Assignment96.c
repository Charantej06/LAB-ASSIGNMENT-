//WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING POINTERS

#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    printf("How many strings do you want to enter: ");
    scanf("%d",&n);
    char str[n][100];
    char *ptr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter string %d: ",i+1);
        scanf(" %[^\n]s",str[i]);
        ptr[i]=str[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp((ptr[i]),(ptr[j]))>0)
            {
                char *temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }

    printf("\nThe strings after arranging in ascending order are:");
    for(int i=0;i<n;i++)
    {
        printf("\n%s",ptr[i]);
    }
    return 0;
}