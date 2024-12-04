//A FILE CALLED “LNMIITSTUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL NUMBER, NAME AND TOTAL MARKS.
//WRITE A C PROGRAM TO CREATE A FILE TO STORE DETAILS OF N STUDENTS

#include<stdio.h>

int main()
{
    FILE *fptr=fopen("LNMIITSTUDENT.JAVA","w");            //Creating a File of N students
    int N;
    int rollno,total_marks;
    char name[25];
    printf("How many students? ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        printf("\nStudent %d\n",i);
        printf("Enter RollNo: ");
        scanf("%d",&rollno);
        fprintf(fptr,"%d",rollno);
        fputs(" ",fptr);
        printf("Enter Name: ");
        scanf(" %[^\n]s",name );
        fputs(name,fptr);
        fputs(" ",fptr);
        printf("Enter Total Marks: ");
        scanf("%d",&total_marks);
        fprintf(fptr,"%d",total_marks);
        fputs("\n",fptr);
    }
    fclose(fptr);
    return 0;
}