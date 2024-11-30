#include<stdio.h>

//PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS . 

int main()
{
  int n[100],max,smax,size; 
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
  if(max!=n[0])
   smax=n[0];
  else 
   smax=n[1]; 
  for(int i=0;i<size;i++)
  {
    if(n[i]>smax&&n[i]<max)
     smax=n[i];
  }   
  printf("The largest number among the given is %d", max);
  printf("\nThe second largest number among the given is %d", smax);
  return 0;
}