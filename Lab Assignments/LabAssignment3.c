#include<stdio.h>
#include<math.h>

float distance(float x1,float y1,float x2,float y2)
{
    float dist = fabs(sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
    return dist;
}

float triangle_area(float x1,float y1,float x2,float y2, float x3,float y3)
{
    float a = distance(x1,y1,x2,y2);
    float b = distance(x2,y2,x3,y3);
    float c = distance(x1,y1,x3,y3);
    float s = (a+b+c)/2;
    float area = sqrt(s*((s-a)*(s-b)*(s-c)));
    return area;

}
float point_check(float x1,float y1,float x2,float y2, float x3,float y3,float x4,float y4)
{
    float area1 = triangle_area(x1,y1,x2,y2,x4,y4);
    float area2 = triangle_area(x2,y2,x3,y3,x4,y4);
    float area3 = triangle_area(x1,y1,x3,y3,x4,y4);
    float total_area = triangle_area(x1,y1,x2,y2,x3,y3);
  
   if(ceil(area1+area2+area3)==total_area)
      return 1;
   else
    return 0;
}
int main()
{
    float x1,y1,x2,y2,x3,y3,x4,y4;
    printf("Enter x1:");
    scanf("%f",&x1);
     printf("Enter y1:");
    scanf("%f",&y1);
     printf("Enter x2:");
    scanf("%f",&x2);
     printf("Enter y2:");
    scanf("%f",&y2);
     printf("Enter x3:");
    scanf("%f",&x3);
     printf("Enter y3:");
    scanf("%f",&y3);
     printf("Enter x4:");
    scanf("%f",&x4);
     printf("Enter y4:");
    scanf("%f",&y4);
    printf("Area of triangle:%.2f\n",triangle_area(x1,y1,x2,y2,x3,y3));
    if(point_check(x1,y1,x2,y2,x3,y3,x4,y4)==1)
        printf("The point is inside of the triangle");
    else
        printf("The point is outside of the triangle ");
    return 0;
}
