#include<stdio.h>
#include<conio.h> //count function;
void main()
{
    int a,count=0;
    printf("Enter Any Number 0 to break");
    while(a!=0)

    {
        printf("Enter value");
        scanf("%d",&a);
        count++;
    }
    printf("total you enter number is  %d",count);
    getch();

}