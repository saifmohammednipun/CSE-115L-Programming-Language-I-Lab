/*Task 3: Convert Celsius to Fahrenheit unit using the following formula.
 Take the value of C as input from user and calculate the value of F.
                    F= (C * 9/5) + 32    */


#include <stdio.h>
int main()
{
    float C,F;

    printf("Insert the value of C:");
    scanf("%f",&C);

    F=(C*9/5)+32;

    printf("The value of F:%.2f",F);

    return 0;


}
