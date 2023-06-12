#include<stdio.h>
#include<conio.h> //with argument with return(yes.yes);
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;

}
void main()
{
    int a,b,c;
    printf("Enter the value of A");
    scanf("%d",&a);
    printf("Enter the Value of B");
    scanf("%d",&b);
    c=sum(a,b);
    printf("The answer is %d",c);
    getch();
}