#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n,m;
float a[10][10], sum, avg;
char grade[10];
clrscr();
printf("Number of student ?");
scanf("%d", &n);
printf("\n");
for(i=0;i<n;i++)
{
sum = 0;
printf("Enter 3 scores of student :%d\n",i+1);
for(j=0;j<3;j++)
{
scanf("%f", &a[i][j]);
sum += a[i][j];
}
avg = sum / 3.0;
a[i][3] = avg;
if(avg < 30.0)
grade[i] = 'E';
else if(avg < 40.0)
grade[i] = 'D';
else if(avg < 50.0)
grade[i] = 'C';
else if(avg < 60.0)
grade[i] = 'B';
else
grade[i] = 'A';
}
printf("\nSl.no Scores Average Grade \n");
printf("--------------------------------\n");
for(i=0;i<n;i++)
{
printf("%d",i+1);
for(j=0;j<4;j++)
printf("%6.2f", a[i][j]);
printf("%6c", grade[i]);
printf("\n");
}
getch();
}
