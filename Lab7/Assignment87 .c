#include<stdio.h>

/*WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND 
DISPLAY THE INFORMATION OF THOSE STUDENT WHOSE MARKS ARE 
GREATHER THAN 500.(PASSING ARRAY OF STRUCTURE INTO FUNCTION). */

struct student{
    char name[30];
    int marks;
};
void isgreater(struct student std[]){
    for(int i=0;i<2;i++){
    if(std[i].marks>500){
        printf("%s",std[i].name);
    }
    }
}
int main(){
    struct student std[2];
    for(int i=0;i<2;i++){
       printf("enter name and marks:");
        scanf(" %[^\n]s", &std[i].name);
        scanf("%d", &std[i].marks);
    }
    isgreater(std);
}