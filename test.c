#include<stdio.h>
void main()
{
    int r;
    float area,circum;
    printf("enter the radius value ");
    scanf("%d",&r);
    area=3.14*r*r;
    circum=2*3.14*r;
    printf("area of circle=%2f",area);
    printf("\n circumference of a circle=%2f",circum);
}