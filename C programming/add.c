#include<stdio.h>
#include<conio.h>
void main()
{
    int t;
    float p,r,si;

    printf("Enter a Rate  \n");
    scanf("%f",&r);
    printf("Enter a Amount\n");
    scanf("%f",&p);
    printf("Enter a Time  \n");
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("Simple Interest is  = %f",si);
    getch();

}
