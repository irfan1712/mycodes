#include<stdio.h>
#include<conio.h>
void main()
{
int number,sum=0;
clrscr();
printf("Enter any number\n");
scanf("%d", &number);
while(number != 999)
{
if(number <= 0)
{
scanf("%d", &number);
continue;
}
else
{
sum+=number;
scanf("%d", &number);
}
};
printf("Sum of digits = %d", sum);
getch();
}
