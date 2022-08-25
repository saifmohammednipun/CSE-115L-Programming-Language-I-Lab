#include <stdio.h>
int fun(int n){
    int i,rem,result=0;
    for(int i=1;n!=0;i++) {
      rem=n%10;
       result=result*10+rem;
       n=n/10;
    }
    return result;
    }
int main()
{
    int n;
    printf("Enter an integer number:");
    scanf("%d", &n);

    int s=fun (n);

    printf("Reverse is %d", fun (n));

}

