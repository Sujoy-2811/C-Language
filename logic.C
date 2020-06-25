//WAP to demonstrate the usage of logical operators
#include<stdio.h>
#include<conio.h>

int main()
{
int a,b;
    printf("Enter the value a =");
    scanf("%d",&a);
    printf("To check it is divisible by \n\t\t 5 or 7\n\t\t 5 and 7 ");
    printf("\nSo you entered the value of a= %d\n If the answer is NO (0) and YES (1)",a);
    printf("\nGiven value of a is divisible by 5 and 7 ?\nAnswer is %d",a%5==0 && a%7==0);
    printf("\nGiven value of a is divisible by 5 or 7 ?\nAnswer is %d",a%5==0 || a%7==0);
    getch();
    return 0;
}
