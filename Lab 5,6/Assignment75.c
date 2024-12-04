#include<stdio.h>

/*The annual examination results of 10 students are tabulated as follows:
 Roll No.     Subject1     Subject2      Subject3
 Write a program to read the data and determine the following: 
 (a) Total marks obtained by each student. 
 (b) The highest marks in each subject and the Roll No. of the student who secured it.
 (c) The student who obtained the highest total marks. 
  */

int main()
{
    int rollno[10],sub1[10],sub2[10],sub3[10],totalmarks[10];
    
    for(int i=0;i<10;i++){
       printf("Enter the roll no of student:");
       scanf("%d",&rollno[i]);
      for(int j=1;j<=3;j++){
       printf("sub%d marks:",j);
       if(j==1){
       scanf("%d",&sub1[i]);
       }
       if(j==2){
       scanf("%d",&sub2[i]);
       }
       if(j==3){
       scanf("%d",&sub3[i]);
       }
      } 
    }
    
    for(int i=0;i<10;i++){
       totalmarks[i]=sub1[i]+sub2[i]+sub3[i];
       printf("Total marks of student of rollno %d are:%d\n",rollno[i],totalmarks[i]);
    }
    
    int max,count;
    max==totalmarks[0];
    for(int i=1;i<10;i++){
       if(max<totalmarks[i]){
          max=totalmarks[i];
          count=i;
       }
    }
    
    printf("\nThe student who obtained highest total marks is rollno:%d\n\n",rollno[count]);
    
    int max1,count1;
    for(int i=1;i<10;i++){
       if(max1<sub1[i]){
          max1=sub1[i];
          count1=i;
       }
    }
    
    int max2,count2;
    for(int i=1;i<10;i++){
       if(max2<sub2[i]){
          max2=sub2[i];
          count2=i;
       }
    }
    
    int max3,count3;
    for(int i=1;i<10;i++){
       if(max3<sub3[i]){
          max3=sub3[i];
          count3=i;
       }
    }
    
    
    printf("Highest marks in sub1 are %d and the roll no of the student who secured it is %d\n\n",max1,rollno[count1]);
    printf("Highest marks in sub2 are %d and the roll no of the student who secured it is %d\n\n",max2,rollno[count2]);
    printf("Highest marks in sub3 are %d and the roll no of the student who secured it is %d\n\n",max3,rollno[count3]);
    
    return 0;
}