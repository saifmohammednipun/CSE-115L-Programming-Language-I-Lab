#include <stdio.h>

int sum_Digit(int n){
    // Base Case
    if(n == 0) 
        return 0;
   
    //Recursive case
    return ((n % 10) + sumDigit(n/10));
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    
    int sumOfDigits = sum_Digit(num);
    printf("Sum of digits of %d is %d", num, sumOfDigits);
    return 0;
}