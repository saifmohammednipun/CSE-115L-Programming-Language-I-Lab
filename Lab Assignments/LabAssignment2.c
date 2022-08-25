#include <stdio.h>
void main()

   {
  int arr1[10][10],i,j,n;
  int det=0;
  printf("\n\nCalculate the determinant of a 5 x 5 matrix :\n");
  printf("Input elements in the first matrix :\n");
      
       for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }
	 
  printf("The matrix is :\n");
	 
      for(i=0;i<5;i++)
	   {
	     for(j=0;j<5 ;j++)
	     printf("% 4d",arr1[i][j]);
	     printf("\n");
	    }

      for(i=0;i<5;i++)
      det = det + (arr1[0][i]*(arr1[1][(i+1)%5]*arr1[2][(i+2)%5] - arr1[1][(i+2)%5]*arr1[2][(i+1)%5]));

  printf("\nThe Determinant of the matrix is: %d\n\n",det);
}