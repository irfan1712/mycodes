#include<stdio.h>
int main()
{
    int n,i,a[20];
    printf("enter size of array");
    scanf("%d",&n);
for(i=0;i<n;i++)
{printf("enter value");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{printf("%d\t",a[i]);
}
return 0;
}