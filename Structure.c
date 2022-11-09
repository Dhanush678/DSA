#include<stdio.h>
#include<conio.h>

void main(){
    struct record
    {
        int usn;
        char name[10];
        float grade;

        /* data */
    };
    struct record student;
    printf("enter the details\n");
    printf("enter the usn:\n");
    scanf("%d",&student.usn);
     printf("enter the name:\n");
    scanf("%s",student.name); 
    printf("enter the grade:\n");
    scanf("%f",&student.grade);
    
    printf("printing details\n");
    printf("name:%s\n ",student.name);
      printf("name:%d\n ",student.usn);
        printf("name:%f\n ",student.grade56);


  
  
}