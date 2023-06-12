#include<stdio.h>  //Introduction to loop;
#include<conio.h>
void main()
{
    int a,b;
    while(1)
    {
    printf("Enter the Value of A");
    scanf("%d",&a);
    for(b=1;b<=10;b++)
    {
        printf("%d*%d=%d\n",a,b,a*b);
    }
    }
    getch();
}
