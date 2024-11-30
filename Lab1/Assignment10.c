#include<stdio.h>

/*WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE FORMULA.
 CM = M/2+P/2+C/2+E WHERE 
 CM = Cut of f mark
 M = Marks in Mathematics out of 200 
 P = Marks in Physics out of 200 
 C = Marks in Chemistry out of 200 
 E = Marks in entrance examination out of 100 */
 
int main()
{
    int m,p,c,e;
    printf("enter your mathematics marks: ");
    scanf("%d",&m);
    printf("enter your physics marks: ");
    scanf("%d",&p);
    printf("enter your chemistry marks: ");
    scanf("%d",&c);
    printf("enter your entrance examination marks: ");
    scanf("%d",&e);
    
    int cm=(m/2)+(c/2)+(p/2)+e;
    if((0>m || m>200)||(0>e || e>100)||(0>p || p>200)||(0>c || c>200)){
    printf("you are have entered the wrong marks");
    }
    else{
    printf("your cut off marks are: %d",cm);
    }
    
    
    return 0;
}