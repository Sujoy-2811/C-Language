#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the value of a =");
    scanf("%d",&a);
    if (a%5==0 && a%7==0)
        printf("Number is divisible by 5 and 7");
    else
        printf("Number is not divisible by 5 and 7");
        getch();
        return 0;
    
}