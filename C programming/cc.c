#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf("Enter the value of A \n");
    scanf("%d",&a);
    printf("Enter the value of B \n");
    scanf("%d",&b);
  temp = a;
  a = b;
  b = temp;

  printf("After swapiing the value ");
  printf("%d",a);
  printf("%d",b);

    getch();
}