
#include <stdio.h>
int main()
{
    int i, n,rem,result=0;
    printf("Enter an integer:");
    scanf("%d",&n);

    for(i=1;n!=0;i++)
    {
        rem=n%10;
        result=result*10+rem;
        n=n/10;
    
    }
    printf("Reverse is:%d",result);




    return 0;
}