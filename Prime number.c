#include<stdio.h>
#include<math.h>
void main()
{
int num, i, flag=0;
clrscr();
printf("Enter a number\n");
scanf("%d", &num);
if(num == 0 || num == 1)
printf("%d is not a prime \n",num);
else
{
for(i=2; i<=sqrt(num); i++)
if(num % i == 0)
{
flag = 1;
break;
}
if(flag == 0)
printf("Given number is prime \n");
else
printf("Given number is not a prime\n");
}
getch();
}
