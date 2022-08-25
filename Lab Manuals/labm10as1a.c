
#include<stdio.h>
int main()
{
    int i,j,k,row;

    printf("Enter the number of row: ");
    scanf("%d",&row);

    for(i=row;i>=1;i--)
    {
        for(j=0;j<=row-i;j++)
        {
            printf(" ");
        }

        for(k=i;k>=1;k--)
        {
            printf("* ");
        }

            printf("\n");
    }

    return 0;
}
