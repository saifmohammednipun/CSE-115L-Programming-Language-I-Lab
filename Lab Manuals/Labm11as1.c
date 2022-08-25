#include<stdio.h>
int main()
{
    int number,rem,reverse_num,temp,first,last;
    printf("Insert a number of m:");
    scanf("%d",&first);
    printf("Insert a number of n:");
    scanf("%d",&last);
    printf("all palindrome numbers between m and n, %d and %d :",first,last);
    for(number=first; number<=last; number++)
    {
        temp=number;
        reverse_num=0;
        while(temp)
        {
            rem=temp%10;
            temp=temp/10;
            reverse_num=reverse_num*10+rem;
        }
        if(number==reverse_num)
            printf("%d ",number);
    }






    return 0;
}