
#include <stdio.h>
float diameter ( float r){
    return 2*r;
}
float circumference (float r){
    return 2*3.14*r;
}
float area (float r){
   return (3.14*r*r);
}

int main()
{
    float r;
    printf("Enter radius:");
    scanf("%f",&r);
    printf("Diametere of the circle is:%.2f\n", diameter (r));
    printf("Circumfrence of the circle:%.2f\n",circumference (r));
    printf("Area of the circle:%.2f",area (r));


}
