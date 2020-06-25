#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a =");
    scanf("%d",&a);
    printf("Enter the value of b =");
    scanf("%d",&b);
    printf("Enter the value of c =");
    scanf("%d",&c);
    if (a>b)
    {
        if(a>c)
            printf("a  =%d is greatest number among them",a);
        else
            printf("b  =%d is greatest number among them",b);
    }
    else
    {
            if(b>c)
                printf("b  =%d is greatest number among them",b);
            else
            {
                    printf("c  =%d is greatest number among them",c);
            }
            
    }
    
        getch();
        return 0;
    
}