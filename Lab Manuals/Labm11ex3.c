#include<stdio.h>
int main()
{
    int n,sum;

    printf("Insert the value of n: ");
    scanf("%d",&n);

    printf("Perfect number from 1 to %d:",n);
    for(int i=1;i<=n;i++)
    {
        sum=0;
        int x=i;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }

        if(i==sum)
        {
            printf("%d ",i);
        }
    }

    return 0;
}