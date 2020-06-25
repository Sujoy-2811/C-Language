#include<stdio.h>
#include<conio.h>

int main()
{
    unsigned int a,b,c,d;
    int rem, hcf;
    printf("Enter firt positive numbers =");
    scanf("%d",&a);
    printf("Enter second positive numbers =");
    scanf("%d",&b);
    c=a;
    d=b;
    if(c>d)
    {
        rem=c%d;
        while (rem!= 0)
        {
            c=d;
            d=rem;
            rem=c%d;
        }
        hcf=d;
    }
    else
    {
        rem=d%c;
        while(rem!=0)
        {
            d=c;
            c=rem;
            rem=d%c;
        }
        hcf=c;
    }
    printf("HCF of %u and %u is %d",a,b,hcf);
    getch(); 
    return 0;

}
