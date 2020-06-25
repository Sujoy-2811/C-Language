#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    int a,b,c;
    float x,y,d;
    printf("Enter the values of a,b,c =");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        x=y=(-b)/(2*a);
        printf("Roots are equal n are =%f",x);
    }
    if (d<0)
    {
        printf("Roots are imaginary");
    }
    if(d>0)
    {
        x=(((-b)+sqrt(d))/(2*a));
        y=(((-b)-sqrt(d))/(2*a));
        printf("Roots are equal n are =%f",d);
        printf("Roots are equal n are =%f %f",x,y);
    }
    getch();
    return 0;
}