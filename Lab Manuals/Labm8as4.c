#include <stdio.h>
int main()
{
    double i,n, sum=0,fact=1;
   
   printf("Enter n:");
   scanf("%lf",&n);

    for(i=1;i<=n;i++)
    {
       fact=fact*i;
       sum=sum+1/fact;
    }
    printf("sum:%.2lf",sum);
    
    return 0;
}
