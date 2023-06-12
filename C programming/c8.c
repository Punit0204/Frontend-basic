#include<stdio.h>
#include<conio.h>  //Age restriction;
void main()
{
    int a;
    printf("Enter your age");
    scanf("%d",&a);
    if(a>18)
    {
        printf("Your are eligiable for voting");

    }
    else
    {
        printf("Your are not eligiable for voting");
    }
    getch();
}
