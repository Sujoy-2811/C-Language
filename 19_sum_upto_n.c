#include<stdio.h>
#include<conio.h>

int main()
    {
    int a,n,sum;
    sum=0;
    a=1;
    printf("Enter the a numer upto which u wnats to add =");
    scanf("%d",&n);
    while(a<=n)
    {
        sum= sum+a;
        a++;
    }
    printf("\nSum of first %d consecutive numbers =%d",n,sum);
    getch();
    return 0;
}