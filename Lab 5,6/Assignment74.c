#include<stdio.h>

/*Given are one dimensional arrays A and B which are sorted in ascending order.
 Write a program to merge them into a single sorted array C that contains
 every item form array A and B, in ascending order. */

int main()
{
    int sizeA,sizeB,temp;
    printf("Number of elements in array A:");
    scanf("%d",&sizeA);
    
    int a[sizeA],b[sizeB];
    printf("Enter the numbers of array A\n");
    for(int i=0;i<sizeA;i++){
       scanf("%d",&a[i]);
    }
    
    printf("Number of elements in array B:");
    scanf("%d",&sizeB);
    
    printf("Enter the numbers of array B\n");
    for(int i=0;i<sizeB;i++){
       scanf("%d",&b[i]);
    }
    
    int c[sizeA+sizeB];
    for(int i=0;i<(sizeA+sizeB);i++){
       if(i<sizeA){
          c[i]=a[i];
       }
       else{
          c[i]=b[i-sizeA];
       }
    }
    
    for(int i=0;i<(sizeA+sizeB);i++){
       for(int j=i+1;j<(sizeA+sizeB);j++){
         if(c[i]>c[j]){
           temp=c[i];
           c[i]=c[j];
           c[j]=temp;
         }
       }  
    }
    printf("The ascending order is:");
    for(int i=0;i<(sizeA+sizeB);i++){
       if(i==(sizeA+sizeB-1)){
       printf("%d.",c[i]);
       }
       else{
       printf("%d,",c[i]);
       }
    }
    return 0;
}