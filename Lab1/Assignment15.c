#include<stdio.h>

//PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION

int main()
{
    float eng,math,phy,chem,soc,avg;
    
    
    printf("enter the marks of subjects in following order\nenglish\nmaths\nphysics\nchemistry\nsocial\n");
  
    scanf("%f%f%f%f%f",&eng,&math,&phy,&chem,&soc);
    
    avg=(eng+math+phy+chem+soc)/5;
    
    char result;
    
    if(avg>=90){
    result='A';
    }
    else if (avg>=80){
    result='B';
    }
    else if (avg>=60){
    result='C';
    }
    else if (avg>=40){
    result='D';
    }
    else{
    result='F';
    }
    
    printf("your grade is: %c", result);
    
    return 0;
}