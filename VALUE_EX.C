#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b;
  printf("Enter the value of a =");
  scanf("%d",&a);
  printf("Enter the value of b =");
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
   printf("Now we are exchanging the values.So....\n");
  printf("Value of a=%d\nValue of b=%d",a,b);
  getch();
  return 0;
  }