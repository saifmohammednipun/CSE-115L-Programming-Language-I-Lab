#include <stdio.h>
int main()
{
   float const PI=3.14;
   float a,b,cube,cyl;
   printf("Enter the height:");
   scanf("%f",&a);
   printf("Enter the diameter:");
   scanf("%f",&b);

   cube=a*a*a;
   cyl=PI*(b*b/4)*a;

   printf("The volume of cube is:%.1f\n",cube);

    printf("The volume of clyinder is:%.1f",cyl);

    return 0;






}
