#include<stdio.h>
#include<conio.h>  //break value at particular point;
void main()
{
    int a,b;
    printf("Enter the value ");
    scanf("%d",&a);
    printf("Enter the break value");
    scanf("%d",&b);
    for(a=1;a<=1000;a++)
    {
        if(a==b)
        {
            break;
        }
        else
        {
            printf("%d\t",a);
        }
    }
    getch();

}