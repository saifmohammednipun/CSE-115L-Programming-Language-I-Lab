#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define str_size 100

int main()

{
    char str[str_size] ;
    int alphabet, digit, specialch, i ;
    alphabet = digit = specialch = i = 0 ;
    printf("Count total number of alphabets, digits and special characters :\n");

    printf("Enter the string:") ;

       gets(str);

    while(str[i]!='\0')
    {

        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))

        {

            alphabet++;

        }
        else if(str[i]>='0' && str[i]<='9')
        {

            digit++ ;

        }

        else
        {
          specialch++;

        }
           i++ ;

    }

    printf("Number of Alphabets in the string is: %d\n",alphabet);

    printf("Number of Digits in the string is: %d\n",digit);

    printf("Number of Special characters in the string is : %d\n\n", specialch);

   return 0;
}