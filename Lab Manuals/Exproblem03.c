
#include <stdio.h>
 int main()
 {
   int n;
   printf("Enter an integer number:");
   scanf("%d",&n);

   if(n%2==0){
     printf("It is a multiple of 2");
   }

    else if(n%5==0){
      printf("it is a multiple of 5");
    }
    else{
         printf("The number is invalid");
    }



     return 0;
 }
