#include<stdio.h>
#include<conio.h> //Odd Even Count;
void main()
{
    int a,b=0,c=0,count=0;
    printf("Enter 0 of break number\n");
    while(a!=0)
    {
        printf("Enter the value ");
        scanf("%d",&a);
        count++;
        if(a%2==0)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    printf("Total Number of Value is %d\n",count);
    printf("Total Number of Even Value is %d\n",b);
    printf("Total Number of Odd Value is %d\n",c);
    getch();
}

