#include<stdio.h>
#include<conio.h>
void main()
{
int r;
float area, circum;
clrscr();
printf("\n Enter radius value :");
scanf("%d", &r);
area = 3.14 * r * r;
circum = 2 * 3.14 * r;
printf("\n Area of Circle = %f", area);
printf("\n Circumfrence of Circle = %f", circum);
getch();
}
