#include<stdio.h>
#include <string.h>
int main()
{
    char string[1000],ch;
    int count,i,j,k,number;
    printf("Enter a string:");//how are you.
    gets(string);

    for(i=0;i<strlen(string);i++)
    {
        if(string[i]==' ')
        {
            continue;
        }
        count=0;
        for(j=i+1;j<strlen(string);j++)
        {
            if(string[i]==string[j])
            {
                count++;
            }
        }

        if(count==0)
        {
            printf("%c, ",string[i]);
        }
    }

    return 0;
}