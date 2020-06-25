#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the marks of math and science");
    scanf("%d%d",&a,&b);
    if(a>=35)
    {if(b>=35)
    printf("you got 45rs");
    else
    printf("you got 15rs");}
    else if(b>=35)
     printf("you got 15rs");
    
    
    return 0;
}