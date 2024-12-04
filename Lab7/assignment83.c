#include<stdio.h>

//WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM. 

int maximum (int *a,int n);

int main()
{   
    int n;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    int c=maximum(arr,n);
    printf("maximum number is: %d",c);
    return 0;
}

int maximum (int *a,int n){
   printf("enter the elements of array\n");
   for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   
   for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
       if(a[i]>a[j]){
         int temp;
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
       }
     }
   }
   return a[n-1];
}