#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,i,j,n;
    printf("Enter how many lines for pattern =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=i;
        b=n-1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a+=b;
            b--;
        }
        printf("\n");
    }
    getch(); 
    return 0;

}
