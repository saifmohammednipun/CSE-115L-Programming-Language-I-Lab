#include<stdio.h>

int main()
{
   char str[200];
   printf("Enter a string: ");
   gets(str);
   fflush(stdin);
  

   char *ptr=str; 
   int vowel= 0;
   int constant = 0;

   while(*ptr != NULL)
   {
       if(*ptr == 'a' || *ptr == 'A' || *ptr == 'e' || *ptr == 'E' ||
           *ptr == 'i' || *ptr == 'I' || *ptr == 'o' || *ptr == 'O'
           || *ptr == 'u' || *ptr == 'U')
       {
           vowel++;
       }
       else
       {
           constant++;
       }
      
       ptr++;
   }

   printf("Number of vowels: %d\n", vowel);
   printf("Number of constant: %d\n", constant);
}
