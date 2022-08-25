
#include <stdio.h>
int main()
{
 int i=1,n,digit,sum=0,flag=0;
 printf("Enter any number:");
 scanf("%d",&n);
 
 
 while(n!=0)
{
   digit=n%10;
   sum=sum+digit;
   n=n/10;
   i++;
}
  printf("Sum of its digit:%d.",sum);
   
  if(sum%2==0){
    flag=1;
    }
    if (n==1) 
    {
      printf("1 is neither prime nor composite.");
    }
     else 
     {
       if (flag==0)
        printf("It is a prime number.",n);
       else
        printf("It is not a prime number.",n);
     }
return 0;
}