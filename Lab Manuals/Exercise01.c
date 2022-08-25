
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the first letter of fruits:");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'M':
            printf("The prie of mango is Tk.500/kg");
            break;
        case 'A':
             printf("The price of apple is Tk.250/kg");
             break;
        case 'B':
            printf("tThe price of banana is Tk.130/kg");
            break;    
        case 'C':
            printf("The price of cherry is Tk.270/kg");
            break;
    
    default:
          printf("This fruit is not avialable in stock");

  }
   return 0;
}