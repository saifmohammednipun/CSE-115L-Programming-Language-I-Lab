
#include <stdio.h>
int main()
{
    int m;
    printf("Enter the month number:");
    scanf("%d",&m);

    if(m==1||m==3||m==5||m==7||m==8||m==9||m==11)
      {
       printf("The number of daysin month:31");
      }

    else if (m==4||m==6||m==10||m==12)
      {
        printf("The number of days in month:30");
      }

     else if(m==2)
      {
         printf("The number of days in month:28");
      }

    else
     {
        printf("Invalid Month Number");
     }

    return 0;
}
