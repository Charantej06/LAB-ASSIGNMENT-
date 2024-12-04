#include<stdio.h>

/*An election is contested by 5 candidates.
 The candidate is numbered are 1 to 5 and the voting is done by marking the candidate number on the ballot paper.
  Write a program to read the ballots and count the votes cast for each candidate using an array variable count.
   In case, a number, read is outside the range 1 to 5, the ballot should be considered as a ‘spoilt ballot’ and
    the program should also count the number of spoilt ballots. */

int main()
{
    int a[20],count[6]={0,0,0,0,0,0};
    
    printf("Enter the candidate number:\n");
    for(int i=0;i<20;i++){
       scanf("%d",&a[i]);
    }
    
    for(int i=0;i<20;i++){
       if(a[i]==1){
       count[1]++;
       }
       else if(a[i]==2){
         count[2]++;
       }
       else if(a[i]==3){
         count[3]++;
       }
       else if(a[i]==4){
         count[4]++;
       }
       else if(a[i]==5){
         count[5]++;
       }
       else{
         count[0]++;
       }
    }
    
    printf("Candidate 1 has got %d votes\n",count[1]);
    printf("Candidate 2 has got %d votes\n",count[2]);
    printf("Candidate 3 has got %d votes\n",count[3]);
    printf("Candidate 4 has got %d votes\n",count[4]);
    printf("Candidate 5 has got %d votes\n",count[5]);
    printf("Spoilt ballot votes are %d\n",count[0]);
    
    return 0;
}