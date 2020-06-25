#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b=7,i;
    printf("Enter number upto which numbers divisible by 7 = ");
    scanf("%d",&a);
    printf("Numbers are divisible upto %d by 7:\n",a);
    for(i=1; i<=a;i++)
    {
        
        if(i%7==0)
        printf("%d\t",i);
        if(i%35==0)
        printf("\n");
    }
    getch(); 
    return 0;

}
