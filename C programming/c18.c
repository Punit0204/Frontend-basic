#include<stdio.h>   //Functions introduction;
#include<conio.h>   //1.No argument No return(n0.n0);
void ADD()   
{
    int a,b,c;
    printf("Enter the value of A\n");
    scanf("%d",&a);
    printf("Enter the value of B\n");
    scanf("%d",&b);
    c=a+b;
    printf("The answer is %d",c);
}
void main()
{
    ADD();
}