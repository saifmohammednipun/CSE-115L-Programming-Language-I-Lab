
#include <stdio.h>
int main()
{
    int i,base,power,product=1;
    printf("Enter base:");
    scanf("%d",&base);
    printf("Enter power:");
    scanf("%d",&power);

    for(i=1;i<=power;i++)
    {
      product=product*base;
    }
     printf("Answer:%d",product);

    return 0;
}