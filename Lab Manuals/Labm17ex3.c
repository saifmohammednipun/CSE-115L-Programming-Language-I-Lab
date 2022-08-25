#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee
{
    char name[120];
    char DOB[100];
    char start_date[100];
    int salary;
}arr[4];
int main()
{

    printf("dial info 4 Employee:\n");
    for( int i= 0; i<4; i++)
    {
        printf("Name: ");
        scanf("%[^\n]",arr[i].name);
        fflush(stdin);

        printf("D.O.B: ");
        scanf("%[^\n]",arr[i].DOB);
        fflush(stdin);

        printf("Starting Date: ");
        scanf("%[^\n]",arr[i].start_date);
        fflush(stdin);

        printf("Salary: ");
        scanf("%d",&arr[i].salary);
        printf("\n");
        fflush(stdin);
    }
    int maximum_salary = -1;
    int maximum_salary_Index = -1;
    
    for( int i=0;i<4;i++ )
    {
        if( maximum_salary <= arr[i].salary )
        {
            maximum_salary = arr[i].salary;
            maximum_salary_Index = i;
        }
    }
    
    int i=maximum_salary_Index;
    
    printf("Info of employee with highest salary:\n");
    printf("Name:");
    
    for(int j=0;j< strlen(arr[i].name); j++ )
    {
        printf("%c",arr[i].name[j]);
    }

    printf("\nD.B.O: ");
    for( int j=0;j< strlen(arr[i].DOB); j++ )
    {
        printf("%c",arr[i].DOB[j]);
    }
    printf("\nStarting date: ");
    for( int j = 0 ; j<strlen(arr[i].start_date) ; j++ )
    {
        printf("%c",arr[i].start_date[j]);
    }
    printf("\nSalary: ");
    printf("%d\n\n",arr[i].salary);

    return 0;
}