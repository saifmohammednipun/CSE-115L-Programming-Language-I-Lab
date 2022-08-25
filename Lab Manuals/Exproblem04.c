

#include <stdio.h>
int main()
{
    int n;
    printf("Enter an integer number:");
    scanf("%d",&n);

    if (n%5==0&&n%11==0){
      printf("It is multipple by both 5 and 11");
    }

    else if(n%5==0){
      printf("It is multiple by only 5");
    }

    else if(n%11==0){
      printf("It is multiple by only 11");
    }


      else{
         printf("Neither of them");
      }


    return 0;
}
