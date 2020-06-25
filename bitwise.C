#include<stdio.h>
#include<conio.h>
int main()
{
    unsigned a = 0x34bd;
    unsigned b = 0x16ed;
    int c,d,e;
    c= a&b;
    d= a | b;
    e= a^b;
    printf("a =34bd\nb =16ed\n");
    printf("a & b =%x",c);
    printf("\na | b =%x",d);
    printf("\na ^ b =%x",e);
    getch();
    return 0;
}