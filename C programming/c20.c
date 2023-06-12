#include<stdio.h>
#include<conio.h>
int sum()  //without argument with Return(no.yes);
{
    int a,b,c;
    printf("Enter the value of A");
    scanf("%d",&a);
    printf("Enter the value of B");
    scanf("%d",&b);
    c=a+b;
    return c;
}
void main()
{
    int c;
    c=sum();
    printf("The answer is %d",c);
    getch();
}