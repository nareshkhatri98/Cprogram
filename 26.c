#include<stdio.h>
void area_of_circle();
int main()
{
area_of_circle();
return 0;
}

void area_of_circle()
{
    double r,pi=3.14,area;
    printf("enter the radious:");
    scanf("%lf",&r);
    area=pi*r*r;
    printf("area is=%lf",area);
}