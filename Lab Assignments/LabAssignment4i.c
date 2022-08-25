#include <stdio.h>
#include <string.h>
int main()
{
     char str[100];
     int i,vowel=0,consonent=0,len;
     printf("Enter string:");
     gets(str);
     len=strlen(str);
     
     for(i=0;i<len;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowel++;
        }
        else if((str[i]>='a'&& str[i]<='z')|| (str[i]>='A'&& str[i]<='Z'))
        {
            consonent++;
        }
    }
    printf("Total number of vowel in the string:%d\n",vowel);
    printf("Total Number of consonent in the string:%d",consonent);
  return 0;
}