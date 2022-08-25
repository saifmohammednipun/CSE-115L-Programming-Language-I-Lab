
#include <stdio.h>
int main()
{
 int i=1,dec,bin=0,rem=0,place=1;
 printf("Enter an decimal number:");
 scanf("%d",&dec);
 while(dec)
 {
     rem=dec%2;
     dec=dec/2;
     bin=bin+(rem*place);
     place=place*10;
     i++;
 }
  printf("The binary number is:%d",bin);



    return 0;

}