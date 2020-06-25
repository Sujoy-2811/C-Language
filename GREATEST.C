#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    printf("Enter values of a =");
    scanf("%d",&a);
    printf("\nEnter values of b =");
    scanf("%d",&b);
    printf("\nEnter values of c =");
    scanf("%d",&c);
    d=(a>b)?((a>c)?a:c):((b>c)?b:c) ;
    printf("Greatest value is %d among them",d);
    getch();
    return 0;
}