
#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
    int a,b;
    a=24;
    b=67;
    printf("Before calling (in main)");
    printf("\na =%d, b =%d",a,b);
    swap(&a,&b);
    printf("\nAfter calling (in main)");
    printf("\na =%d, b =%d",a,b);
    getch();

}
void swap(int *x,int *y)
{

    int c;
    c=*x;
    *x=*y;
    *y=c;
    printf("\nAfter modification (in function)");
    printf("\nx =%d, y =%d",*x,*y);
}
