#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter values of a =");
    scanf("%d",&a);
    printf("\nEnter values of b =");
    scanf("%d",&b);
    c=(a>b)?a:b;
    printf("%d is greater",c);
    getch();
    return 0;
}