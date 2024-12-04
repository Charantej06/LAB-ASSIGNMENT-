//WRITE A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”. 

#include<stdio.h>

int main()
{
    FILE *fptr=fopen("LNMIITSTUDENT.DAT","a");
    int N;
    int rollno,total_marks;
    char name[25];
    printf("How many students do you want to add? ");
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