#include <stdio.h>
int main()
{
int i,m,n;
printf("Enter m:");
scanf("%d",&m);
printf("Enter n:");
scanf("%d",&n);

 if(m<n)
  {
    for(i=n;i>=m;i--)
    {
     if(i%2==0)
     {
      printf("%d ",i);
     }
    }
}
else
  {
  for(i=m;i>=n;i--)
  {
    if(i%2==0)
    {
     printf("%d ",i);
    }
 }

}

  


return 0;
}