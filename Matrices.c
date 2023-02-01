#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10], b[10][10], c[10][10],d[10][10],i,j,m,n,p,q;
clrscr();
printf("\nInput row & column of A matrix :");
scanf("%d%d", &n, &m);
printf("A matrix row = %d and coloum = %d", n,m);
printf("\nInput row & column of B matrix :");
scanf("%d%d", &p, &q);
printf("B matrix row = %d and coloum = %d", p,q);
/* Checks if matrixes can be added */
if((n == p) && (m==q))
{
printf("\nMatrices can be added");
printf("\nInput A matrix elements\n");
for(i=0;i<n;++i)
for(j=0;j<m;++j)
 scanf("%d", &a[i][j]);
printf("Input B matrix elements\n");
for(i=0;i<n;++i)
for(j=0;j<m;++j)
 scanf("%d", &b[i][j]);
 /* Print A - matrix in matrix form */
printf("A matrix elements\n");
for(i = 0; i < n; ++i)
{
for(j=0; j < m; ++j)
printf("%5d", a[i][j]);
printf("\n");
}
/* Print B - matrix in matrix form */
printf("B matrix elements\n");
for(i = 0; i < n; ++i)
{
for(j=0; j < m; ++j)
printf("%5d", b[i][j]);
printf("\n");
}
/* Addition and Subtraction of two matrices */
for(i=0;i<n;++i)
for(j=0;j<m;++j)
{
c[i][j] = a[i][j] + b[i][j];
d[i][j] = a[i][j] - b[i][j];
}
printf("Addition of A & B matrices :\n");
for(i=0;i<n;++i)
{
for(j=0;j<m;++j)
printf("%5d", c[i][j]);
printf("\n");
}
printf("Subtraction of A & B matrices :\n");
for(i=0;i<n;++i)
{
for(j=0;j<m;++j)
printf("%5d", d[i][j]);
printf("\n");
}
}
else
printf("\nMatrices can not be addted");
getch();
}
