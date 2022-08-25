#include <stdio.h>
int main()
{  
    int n,sum=0,i=2;
    printf("Enter the value of n:");
    scanf("%d",&n);

 while(i<=n)
    {
        sum=sum+i*i*i;
        i=i+3;
    }
    printf("Sum:%d",sum);

    return 0;
}