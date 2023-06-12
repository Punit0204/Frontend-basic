#include<stdio.h>
#include<conio.h> //2.With argument No return (yes.no);
void sum(int a,int b)
{
    int c;
    c=a+b;
    printf("The Answer is %d",c);

}
void main()
{
    int a,b;
    printf("Enter the value of A ");
    scanf("%d",&a);
    printf("Enter the Value of B");
    scanf("%d",&b);
    sum(a,b);
    getch();
}
