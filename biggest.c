#include<stdio.h>
int main()
{
    int a,b,c,big;
    printf("Enter three number");
    scanf("%d%d%d",&a,&b,&c);
    big=a;
    if(b>big)big=b;
    if(c>big)big=c;
    printf("%d",big);
    return 0;
}