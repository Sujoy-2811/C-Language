#include<stdio.h>
#include<conio.h>

int main()
{
    int a,i,x,sum=0;
    float avg;
    printf("How many numbers you wnat =");
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        printf("Enter the value of %d number =",i);
        scanf("%d",&x);
        sum+=x;
    }
    avg=(float)sum/a;
    printf("Average of given numbers = %f",avg);
    getch();
    return 0;

}
