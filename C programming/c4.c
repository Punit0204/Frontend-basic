#include<stdio.h>
#include<conio.h>   //if else statment condition;
void main()
{
    int a;
    printf("Enter the value");
    scanf("%d",&a);   //var a;
    if(a%2==0)
    {
        printf("The Number is Even");
    }
    else
    {
        printf("The Number is Odd");
    }
    getch();
}