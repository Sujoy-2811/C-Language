#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b=0,i,j;
    printf("Limit is 1000\n");
    printf("Enter the number uptp which u want to check prime number :");
    scanf("%d",&a);
    printf("Prime numbers are ");
    for(i=2;i<=1000;i++)
    {
        for(j=2;j<i;j++)
        {
            b=0;
            if(i%j==0)
            {
                b++;
                break;
            }


        }
        if(b==0 && i<=a)
        printf("%d\t",i);
    

    }
    getch(); 
    

}
