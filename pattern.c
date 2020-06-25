#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i,j,n;
    printf("Enter number of rows =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=a;b++)
        printf(" ");
        for(b=1;b<=n-a;b++)
        printf("*");
        printf("\n");
    }
    return 0;
}