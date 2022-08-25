
#include <stdio.h>
#include <stdlib.h>

int num=0;

struct var
{
    int x;
} arr[100];

int main()
{

    printf("Enter the number of elements( Should be <= 100 ):\n ");
    scanf("%d",&num);
    
    if(num>100)
    {
        printf("The input is invalid");
        return 0;
    }



    for( int i = 0; i<num ; i++ )
    {
        scanf("%d",&arr[i].x);
    }

    for( int i = 0 ; i<num ; i++ )
    {
        printf("%d ",arr[i].x);
    }


    return 0;
}