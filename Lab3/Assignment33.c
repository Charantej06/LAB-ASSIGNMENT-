#include<stdio.h>

//PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS. 

int main()
{
  int n[100],max,min,size; 
  printf("How many numbers? ");
  scanf("%d", &size);
  printf("Enter the numbers: ");
  for(int i=0;i<size;i++)
   scanf("%d", &n[i]);
  max=n[0];
  for(int i=0;i<size;i++)
   {
     if(n[i]>max)
      max=n[i];
   } 
  min=n[0];
  for(int i=0;i<size;i++)
   {
     if(n[i]<min)
      min=n[i];
   } 
  printf("The largest number among the given is %d", max);
  printf("\nThe smallest number among the given is %d", min);
  return 0;
}