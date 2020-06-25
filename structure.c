#include<stdio.h>
#include<conio.h>
int main()
{
    char letter;
    printf("Enter a letter from keyboard =");
    letter = getchar();
    if ((letter >='A')&&(letter<='Z'))
        printf(" Enter letter is uppercase");
    else
    {
            printf("Enter letter is not uppercase");
    }
    getch();
    return 0;

}