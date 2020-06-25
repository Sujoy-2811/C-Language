#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("To check value of a is greater or not than value of b");
    printf("\nEnter value of a =");
    scanf("%d",&a);
    printf("\nEnter value of b =");
    scanf("%d",&b);
    printf("\n\tIf the answer is YES (1) and NO (0)");
    printf("\nValue of a is greater than b ?\n\t ____Answer is %d____",a>b); 
    getch();
    return 0;
}