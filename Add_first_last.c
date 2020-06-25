#include<stdio.h>
#include<conio.h>
int main()
{
    int  first, last, n,sum;
    printf("Enter number =");
    scanf("%d",&n);
    last=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    first=n;
    sum =first + last;
    printf("Sum = %d",sum);
    getch();
    return 0;
}