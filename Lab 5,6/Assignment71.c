//Write a program in C to find the pivot element of a sorted and rotated array using binary search

#include<stdio.h>

int findpivot(int [],int,int);
int main()
{
    int n;
    printf("Enter the number of array elements you want to enter: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter an sorted and rotated array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    int pivot=findpivot(arr,0,n-1);
    
    if(pivot==-1)
        printf("The array is not Rotated.");
    else
    {    
        printf("\nPivot element index: %d",pivot);
        printf("\nPivot element: %d",arr[pivot]);
    }

    return 0;
}

int findpivot(int arr[],int low,int high)
{
    if(low>high)
        return -1;

    int mid=(low+high)/2;

    if(arr[mid-1]>arr[mid])
        return mid;

    if(arr[low]>arr[mid])
        return findpivot(arr,low,mid-1);
    else
        return findpivot(arr,mid+1,high);
}