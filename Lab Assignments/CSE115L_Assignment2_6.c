#include<stdio.h>
struct Students
{
    char Name[40];
    int Id;
    char Department[40];
    float CGPA;
    char Gender;
};


void students_CGPA(struct Students s[])
{

    int i;

    printf("\n\n list of students with CGPA more than 3.5\n\n");


    printf("%-15s %-10s %-8s %-6s %-8s\n", "Name", "ID", "Dept", "CGPA", "Gender");


    for(i=0;i<5;i++)
    {

        if(s[i].CGPA > 3.5)


            printf("%-15s %-10d %-8s %-6.2f %-8c\n", s[i].Name, s[i].Id, s[i].Department, s[i].CGPA, s[i].Gender);
    }
}


void separateMaleFemale(struct Students s[])
{

    FILE *fp1, *fp2;
     int i;


    fp1 = fopen("Male_students.txt", "w");
     fp2 = fopen("Female_students.txt", "w");


    for(i=0;i<5;i++)
    {

        if(s[i].Gender == 'M')


            fprintf(fp1, "%-15s %-10d %-8s %-6.2f %-4c\n", s[i].Name, s[i].Id, s[i].Department, s[i].CGPA, s[i].Gender);


        else


            fprintf(fp2, "%-15s %-10d %-8s %-6.2f %-4c\n", s[i].Name, s[i].Id, s[i].Department, s[i].CGPA, s[i].Gender);
    }
}


int main()
{

    struct Students s[5];
     int i;
     FILE *fp;


    fp = fopen("Student.txt","w");


    for(i=0;i<5;i++)
    {
        printf("\nInsert %d Student Details:\n", i+1);


        printf("Insert Student Name: ");
        scanf("%[^\n]s", s[i].Name);


        printf("Insert Student ID: ");
        scanf("%d", &s[i].Id);


        getchar();


        printf("Insert Department: ");
        scanf("%[^\n]s", s[i].Department);


        printf("Insert CGPA: ");
        scanf("%f", &s[i].CGPA);


        printf("Insert Gender: ");
        scanf(" %c", &s[i].Gender);


        getchar();
    }


    for(i=0;i<5;i++)
    {
        fprintf(fp, "%-15s %-10d %-8s %-6.2f %-4c\n", s[i].Name, s[i].Id, s[i].Department, s[i].CGPA, s[i].Gender);
    }


    students_CGPA(s);
    separateMaleFemale(s);

    return 0;
}