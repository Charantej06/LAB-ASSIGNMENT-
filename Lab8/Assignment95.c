#include<stdio.h>

/*WRITE A  C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER
,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE.
 DECLARE  A STRUCTURE POINTER AND AN ARRAY EMPLOY WITH 50 ELEMENTS .
 THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND PRINT THE LIST 
 OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY. */

struct employee {
  int num;
  char name[100];
  float basic_pay;
};

int main()
{   struct employee e[50],*p;
    int n;
    label:
    printf("how many employees details you want to enter:");
    scanf("%d",&n);
    if(n>50){
      printf("employees limit is upto 50\n\n");
      goto label;
    }
    for(int i=0;i<n;i++){
      p=&e[i];
      printf("\nenter the employee %d number: ",i+1);
      scanf("%d",&p->num);
      printf("enter the employee %d name: ",i+1);
      scanf("%s",&p->name);
      printf("enter the employee %d basic pay:",i+1);
      scanf("%f",&p->basic_pay);
    }
    printf("\n\n");
    for(int i=0;i<n;i++){
     p=&e[i];
        printf("employee %d details\n",i+1);
        printf("number:%d\n",p->num);
        printf("name:%s\n",p->name);
        printf("basic pay:%.2f\n\n",p->basic_pay);
    }
    
    return 0;
}