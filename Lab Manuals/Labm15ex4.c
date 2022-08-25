#include<stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char string[1000];
    int count=0,i,j,k,number;
    printf("Enter a string:");
    gets(string);

    printf("Frequencies of letters in the input string:\n");

    for(i=0; i<strlen(string); i++)
    {
        
        if(string[i]==' ')
        {
            continue;
        }
        
        count=1;
        for(j=i+1; j<strlen(string); j++)
        {
            if(toupper(string[i])==toupper(string[j]))
            {
                count++;
                string[j]=' ';
            }
        }

        printf("%c/%c: %d\n",toupper(string[i]),tolower(string[i]),count);
    }

    return 0;
}