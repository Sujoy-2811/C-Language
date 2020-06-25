/*WAP to determine whether the given year is a leap year or not 
by contional operator*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter value of any year =");
    scanf("%d",&a);
    b=(a%4==0)? printf("Given year is a leap year"): printf("Given year is not a leap year");
    getch();
    return 0;
}