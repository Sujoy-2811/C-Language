#include<stdio.h>
#include<conio.h>
int main()
{
    unsigned int a;
    printf("Enter the value of angle =" );
    scanf("%u",&a);
    if(a>0 && a<90)
        printf("Given angle =%u (in degree) is acute angle",a);
    else if(a==90)
        printf("Given angle =%u (in degree) is right angle",a);
    else if(a>90 && a<180)
        printf("Given angle =%u (in degree) is obtuse angle",a);
    else if(a==180)
        printf("Given angle =%u (in degree) is straight angle",a);
    else if(a>180 && a<360)
        printf("Given angle =%u (in degree) is reflex angle",a);
    else if(a==360)
        printf("Given angle =%u (in degree) is complete angle",a);
    else
        printf("Given angle is not valid");
        getch();
        return 0;
    
    
}