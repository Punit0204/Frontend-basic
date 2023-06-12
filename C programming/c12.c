#include<stdio.h>
#include<conio.h>   //example of break statment at particular points;
void main()
{
    int a;
    for (a=1;a<=50; a++)
    {
        if(a%5==0)
        {
            printf("Remove\n");
        }
       else
       {

           printf("%d\n",a);
       }
    }
    getch();
}    