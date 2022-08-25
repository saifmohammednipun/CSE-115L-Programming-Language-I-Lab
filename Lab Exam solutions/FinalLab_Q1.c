#include<stdio.h>            


int main()

{

    int mat[3][3], i, j, max;
    printf("Insert any n*n matrix :\n");
    for(i=0; i<3; i++)
    {

        for(j=0; j<3; j++)
        scanf("%d", &mat[i][j]) ;

    }
    max = mat[0][0];
    for(i=0; i<3; i++)

    {


        for(j=0; j<3; j++)


        {
            if(max<mat[i][j])
                max = mat[i][j] ;
        }
    }
    printf(" The 2nd Largest Number is = %d\n", max);



    return 0;
}