#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b,x,y;
   printf("Enter the value of dividend =");
   scanf("%d",&a);
   printf("Enter the value of divisor =");
   scanf("%d",&b);
   x=a/b;
   y=a%b;
   printf("Value of quotient =%d\nValue of remainder =%d",x,y);
   getch();
   return 0;
   }
