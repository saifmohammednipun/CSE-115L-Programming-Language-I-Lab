#include<stdio.h>
int main()
{
    int i ,j ,start,end,isPrime,sum=0 ;
    printf("Insert lower limit,m:");
    scanf("%d",&start);
    printf("Insert upper limit,n:");
    scanf("%d",&end);

    for(i=start; i<=end;i++)
    {
        isPrime=1 ;
        for(j=2;j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                isPrime=0;
                break ;
            }
        }

        if(isPrime==1)
        {
            sum+=i ;

        }
    }
    printf("Sum of all prime numbers between %d and %d = %d",start,end,sum);

 return 0 ;
}