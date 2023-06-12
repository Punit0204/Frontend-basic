#include<stdio.h>
#include<conio.h>// if else with and/or opreator;
void main()
{
    char g;
    int age;
    
    printf("Enter M for Male And F for Female\n");
    
    printf("Enter Your Gender\n");
    scanf("%c",&g);
    printf("Enter your Age \n");
    scanf("%d",&age);
    if(g=='M'&&age>=18)
    {
        printf("You Are eligiable for Marriage\n");

    }
    else if(g=='F'&&age>=21)
    {
        printf("You are not eligiable for Marriage");
    }
    else
    printf("You are Not eligiable for Marriage");
    getch();

}