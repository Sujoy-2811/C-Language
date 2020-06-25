#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,i,n;
    printf("Enter the numer =");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        a++;
    }
    if(a==0)
    printf("Number is prime number");
    else
    {
        printf("Number is not prime number");
    }
    
    return 0;
}