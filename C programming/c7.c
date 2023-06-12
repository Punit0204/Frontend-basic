#include<stdio.h>
#include<conio.h> //else if conti statment;
void main()
{
    int a,b,c;
    printf("Enter The value of A\n");
    scanf("%d",&a);
    printf("Enter The value of B\n");
    scanf("%d",&b);
    printf("Enter the value of C\n");
    scanf("%d",&c);
    if(a>=b&&a>=c)
    {
        printf("A is Greater Number");

    }
    else if(b>=a&&b>=c)
    {
        printf("B is Greater Number");

    }
    else 
    {
        printf("C is Greater Number");
    }
    getch();

}