#include<stdio.h>
#include<conio.h>  //continue  statment; 
                 //for loop
void main()
{
    int a;

    for(a=1; a<=25;a++)
    {
       if(a==10)
       {
           continue;
       }
       else{
           printf("%d\n",a);

       }
    }
    getch();
}