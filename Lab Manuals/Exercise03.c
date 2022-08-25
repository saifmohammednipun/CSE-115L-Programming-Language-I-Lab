

#include <stdio.h>
int main()
{
    double num1,num2,add,sub,mul,div;
    char op;
    
    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&op);

    printf("Enter two numbers:");
    scanf("%lf%lf",&num1,&num2);

    switch(op)
    {
      case '+':
           add=num1+num2;
           printf("Addition=%.2lf",add);
           break;
    
      case '-':
           sub=num1-num2;
           printf("Subtraction=%.2lf",sub);
           break;

      case '*':
           mul=num1*num2;
           printf("Multiplication=%.2lf",mul);
           break;

      case '/':
           div=num1/num2;
           printf("Division=%.2lf",div);
           break;

    default:
          printf("Math Error");

    }      
              
    return 0;
}