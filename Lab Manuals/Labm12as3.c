#include <stdio.h>
int sum (int r,int n){
    int i,term=1,sum=1;
    for(i=1;i<=n;i++){
        term=term*r;
        sum=sum+term;
    }
    return sum;

}
int main()
{
    int r,n;
    printf("Enter the value of r:");
    scanf("%d",&r);
    printf("Enter the value of n:");
    scanf("%d",&n);

  int s= sum(r,n);

printf("%d", s);
return 0;

}