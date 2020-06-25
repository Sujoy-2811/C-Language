/*WAP to find greater number
by contional operator*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int A,B;
    printf("Enter value of A =");
    scanf("%d",&A);
     printf("Enter value of B =");
    scanf("%d",&B);
    B=(A>B)? printf("Value of A is greater than B"): printf("Value of B is greater than A");
    return 0;
}