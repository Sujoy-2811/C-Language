#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("Memory occupied by integer :%d",sizeof(a));
    printf("\nMemory occupied by float :%d",sizeof(b));
    printf("\nMemory occupied by character :%d",sizeof(c));
    printf("\nMemory occupied by double :%d",sizeof(d));
    getch();
    return 0;
}