#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b=0,n;
    printf("Enter the number =");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        b=b*10+a;
        n/=10;
    }
    printf("%d",b);
    getch();
    return 0;
}