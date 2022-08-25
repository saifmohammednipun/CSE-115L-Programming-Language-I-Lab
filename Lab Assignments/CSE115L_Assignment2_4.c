#include<stdio.h>
#include<stdlib.h>

struct Countries
{
char Name[30];
long int Population;
char Currency[30];
char Capital[30];
}country[5];

struct Countries country[5],final;

int main()
{
    int i,flag=0;
    FILE *fp;
    
    for(i=0;i<5;i++)
    {
        printf("input details of %d country:\n",i+1);
        printf("input name: ");
        fflush(stdin);
        
        scanf("%s",country[i].Name);
        printf("Insert Population: ");
        scanf("%ld",&country[i].Population);
        printf("Intert Currency: ");
        scanf("%s",country[i].Currency);
        printf("Insert Capital: ");
        fflush(stdin);
        scanf("%s",country[i].Capital);
        printf("\n");
    }

    fp=fopen("input.txt","w");
    if(fp==NULL)
    {
        printf("Error in file opening.");
        exit(0);
    }

    fscanf(fp,"%s%ld%s%s",final.Name,&final.Population,final.Currency,final.Capital);
    fclose(fp); 

    fp=fopen("output.txt","w");
    for(i=0;i<5;i++)
    {
        if(country[i].Population>final.Population)
        {   
            printf("%s %ld %s %s\n",country[i].Name,country[i].Population,country[i].Currency,country[i].Capital);
            fprintf(fp,"%s %ld %s %s\n",country[i].Name,country[i].Population,country[i].Currency,country[i].Capital);
            flag=1;
        }
    }

    if(flag==0)
    {
        puts("Not found.");
        fputs("Not found.",fp);
    }
    fclose(fp); 

    return 0;
}