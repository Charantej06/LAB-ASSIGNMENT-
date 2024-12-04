#include<stdio.h>
int main()
{
  int n,temp,swap;
  printf("How many numbers do you want to enter? ");
  scanf("%d", &n);
  int a[n];
  printf("Enter the numbers:\n");
  for(int i=0;i<n;i++)
    scanf("%d", &a[i]);
  for(int i=0;i<n;i++)
  {
    swap=0;
    for(int j=0;j<n-1;j++)
    {
     if(a[j+1]<a[j])
     {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
      swap+=1;
     }
    } 
    if(swap==0)
     break;
  } 
  printf("The array after sorting is ");
  for(int i=0;i<n;i++)
   printf("%d ", a[i]);
  return 0;
}   