#include<stdio.h>
#include<conio.h>

int main()
{
int a,n;
long int factor=1;
a=1;
printf("Enter a number whose factorial you wnat to calculate =");
scanf("%d",&n);
while(a<=n)
{
    factor = factor*a;
    a++;
}
printf("\nFactorial of %d =%ld",n,factor);
getch();
return 0;
}