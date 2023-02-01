#include<string.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int usn,m1,m2,m3;
char name[30];
float perc,total;
clrscr();
printf("\nEnter your USN :");
scanf("%d", &usn);
printf("\nEnter your name :");
scanf("%s", &name);
printf("\nEnter your PST marks :");
scanf("%d", &m1);
printf("\nEnter your DS marks :");
scanf("%d", &m2);
printf("\nEnter your DM marks :");
scanf("%d", &m3);
total = m1 + m2 + m3;
perc = (total/300) * 100;
printf("\nUSN :%d",usn);
printf("\nName :%s", name);
printf("\nTotal marks = %f", total);
printf("\nPercentage = %f %", perc);
if(perc >= 70)
printf("\nResult = Distinction");
else if(perc >= 60)
printf("\nResult = First Class");
else if(perc >= 50)
printf("\nResult = Second class");
else if(perc >= 40)
printf("\nResult = Pass");
else
printf("\nResult = Fail");
getch();
}
