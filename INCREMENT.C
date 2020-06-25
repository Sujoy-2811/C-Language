#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    printf("lets see how increment operator work in 2 different way");
    printf("\nEnter the value of a =");
    scanf("%d",&a);
    b=++a;
    printf("lets write an equation i.e b=++a\nThen value of a =%d and b =%d",a,b);
    printf("\nEnter the value of c =");
    scanf("%d",&c);
    d=c++;
    printf("Lets write an equation i.e d=c++\nThen value of c =%d and d =%d",c,d);
    getch();
    return 0;
}