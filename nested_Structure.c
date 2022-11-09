#include <stdio.h>
#include <conio.h>

void main()
{
    struct record
    {
        int usn;
        char name[10];
        float grade;

        /* data */
    };
    printf("enter the number of elements");
    int n;
    scanf("%d", &n);
    struct record student[n];
    printf("enter the details\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter the usn:\n");
        scanf("%d", &student[n].usn);
        printf("enter the name:\n");
        scanf("%s", student[n].name);
        printf("enter the grade:\n");
        scanf("%f", &student[n].grade);
    }

    printf("printing details\n");
    for (int i = 0; i < n; i++)
    {

        printf("name:%s\n ", student[i].name);
        printf("name:%d\n ", student[i].usn);
        printf("name:%f\n ", student[i].grade);
        /* code */
    }
}