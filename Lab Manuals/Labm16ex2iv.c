//lower left triangle
#include<stdio.h>
 
int main()
{
 	int n,rows,columns,a[10][10];
  
 	printf("Enter n: ");
 	scanf("%d",&n);
 
 	printf("Enter the Matrix Elements \n");
 	for(rows=0;rows<n;rows++)
  	{
   		for(columns = 0;columns <n;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
     
 	for(rows = 0; rows<n; rows++)
  	{
  		printf("\n");
   		for(columns = 0; columns < n; columns++)
    	{
    		if(columns <= rows)
    		{
    			printf("%d ", a[rows][columns]);
			}
			else
			{
				printf("0 ");
			}
   	 	}
  	}
  	
 	return 0;
}
