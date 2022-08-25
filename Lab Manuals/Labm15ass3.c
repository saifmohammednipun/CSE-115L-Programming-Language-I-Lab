#include <stdio.h>
#include <string.h>

int main()
{
    char str[12],c;
    int i,temp=0;

    printf("Enter the string : ");
    scanf("%s",str);

    printf("Enter the search key :");
    scanf(" %c",&c);

    for(i=0; i<strlen(str) && str[i]!=c; i++);

    if(i<strlen(str))
    {
        printf("Found");
    }

    else
    {
        printf("Not found");
    }

    return 0;
}