#include<stdio.h>
#include <math.h>

float roundValue (float var,int d)
{
    float value = (int)(var * pow(10,d) + .5);
    return (float)value / pow(10,d);
}

int main()
{
    printf("Enter the floating number: ");
    float var;
    scanf("%f",&var);
    int d;
    printf("Enter the decimal value to round off: ");
    scanf("%d",&d);
    printf("%.2f",roundValue (var,d));
    return 0;
}