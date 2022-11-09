#include <stdio.h>
#include <conio.h>

void main()
{
    struct record
    {
        int usn;
        char name[10];
        float grade;
         struct personal
        {
            char parent[20];
            int day, month, year;
            char gender[10];
            /* data */
        } personal;

        /* data */
    };
    printf("enter the number of elements:");
    int n;
    scanf("%d", &n);
    struct record student[n];
    printf("enter the details\n");
    for (int i = 0; i <= n; i++)
    {
        printf("enter the usn:\n");
        scanf("%d", &student[n].usn);
        printf("enter the name:\n");
        scanf("%s", student[n].name);
        printf("enter the grade:\n");
        scanf("%f", &student[n].grade);
        printf("enter the parent name:\n");
        scanf("%s", student[n].personal.parent);
        printf("enter the date of birth:\n");
        scanf("%d:%d:%d", &student[n].personal.day, &student[n].personal.month, &student[n].personal.year);
        printf("enter the gender:\n");
        scanf("%s", student[n].personal.gender);
    }

    printf("printing details\n");
    for (int i = 0; i <= n; i++)
    {

        printf("name:%s\n ", student[i].name);
        printf("USN:%d\n ", student[i].usn);
        printf("Grade:%f\n ", student[i].grade);
        printf("parent name:%s\n ", student[i].personal.parent);
        printf("Date od birth:%d:%d:%d\n ", student[i].personal.day, student[i].personal.month, student[i].personal.year);
        printf("Gender:%s\n ", student[i].personal.gender);

        /* code */
    }
}