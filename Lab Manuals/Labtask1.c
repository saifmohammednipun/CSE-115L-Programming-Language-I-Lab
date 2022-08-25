/*Task 1. Write a program that asks the user to enter two numbers,
 obtains the two numbers from the user and prints the sum, product,
 difference, quotient and remainder of the two numbers*/

 #include <stdio.h>
 int main()
 {
     int x,y,sum,pro,dif,quo,rem;
     printf("Insert first number:");
     scanf("%d",&x);

     printf("Insert second number:");
     scanf("%d",&y);

     sum=x+y;
     pro=x*y;
     dif=x-y;
     quo=x/y;
     rem=x%y;

     printf("Sum=%d\n",sum);
     printf("Product=%d\n",pro);
     printf("Difference =%d\n",dif);
     printf("Quotient=%d\n",quo);
     printf("Remainder=%d",rem);

     return 0;



 }
