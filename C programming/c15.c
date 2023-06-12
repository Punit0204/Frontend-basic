#include<stdio.h>
#include<conio.h>
void main()   //start to end;
{
    int a,b;
    printf("Enter the starting value\n");
    scanf("%d",&a);
    printf("Enter the ending value\n");
    scanf("%d",&b);
    while(a<=b)
    {
        printf("%d\t",a);
        a++;

    }
    getch();
}