
#include <stdio.h>
int main()
{
    int i,j,isPrime,n;
    printf(" Enter the value of n: ");
    scanf("%d",&n);
    printf("The Pirme numbers %d to %d: ",1, n);

    for(i=2;i<=n;i++){
        isPrime=0;
         for(j=2;j<=i/2;j++){
             if(i%j==0){
                 isPrime=1;
                 break;
             }
             }
           if(isPrime==0)
                printf("%d,",i);
         

    }
    
 return 0;
}