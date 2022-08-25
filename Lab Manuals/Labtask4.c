
/*Home Tasks
Ask user for two integers a and b.
Then swap (interchange) the values of a and b.
That means, a should get the value of b and b should get the value of a.
*/

#include <stdio.h>
int main()
{
    int a,b,z;

    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    z=a;
    a=b;
    b=z;

    printf("After swapping,a:%d\n",a);
    printf("After swapping,b:%d",b);

    return 0;




}
