
//Write a program that reads in 3 numbers and prints their average

#include <stdio.h>
int main()
{
    float x,y,z,avg;
    printf("Insert first number:");
    scanf("%f",&x);
    printf("Insert second number:");
    scanf("%f",&y);
    printf("Insert third number:");
    scanf("%f",&z);

    avg=(x+y+z)/3;

    printf("The average is:%.2f\n",avg);

    return 0;

}
