 #include<stdio.h>

void areaPeri(int *r, float *a, float *p )
{
*a = 3.14 * (*r) * (*r) ;
*p = 2 * 3.14 * (*r) ;
}

void main(){
int radius;
float area,perimeter;

printf ("Enter radius of a circle:") ;
scanf ("%d",&radius) ;

areaPeri(&radius,&area,&perimeter) ;

printf ("Area = %0.2f\n",area);
printf ("Perimeter = %0.2f",perimeter);


}