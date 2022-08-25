#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{ 
    char str[100];
    int i;
    printf("Enter string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        str[i]=str[i]-32;
        else if(str[i]=='A'||str[i]=='B'||str[i]=='I'||str[i]=='O'||str[i]=='U') 
        str[i]=str[i]+32;
    }
    printf("Filtered string:%s",str);
    return 0;
}