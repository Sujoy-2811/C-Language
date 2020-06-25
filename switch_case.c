#include<stdio.h>

int main()
{
    int a,b;
    printf("Type 18 if age is 18+ otherwise any number =");
    scanf("%d",&a);
    printf("\nEnter 0 if your marks is above 50 otherwise any number =");
    scanf("%d",&b);
    switch (a)
    {
    case 18:
        printf("Your age is above 18,so you can drive");
        switch (b)
        {
        case 0:
            printf("\nAnd you got scholarship for study");
            break;
        
        default: printf("\nDrive safe");

        }
        break;
    
    default: printf("\nYou can't drive");
        break;
    }
    return 0;
}