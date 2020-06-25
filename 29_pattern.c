#include<stdio.h>
#include<conio.h>

int main()
{
    int a,i,j,k,m,n;
    printf("Enter how many lines for pattern =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(a=i,k=1;k<=i;a++,k++)
            printf("%d",a);
        for(m=1,a-=1;m<i;a--,m++)
            printf("%d",a);
        printf("\n");
    }
    getch(); 
    return 0;

}
