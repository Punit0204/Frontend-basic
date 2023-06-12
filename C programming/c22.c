#include<stdio.h>
#include<conio.h>  //Switch function;e
void main()
{
    int a,b,c,choice;
    printf("Enter the value of A\n");
    scanf("%d",&a);
    printf("Enterthe value of B\n");
    scanf("%d",&b);
    printf("1......Addtion\n");
    printf("2......Subtraction\n");
    printf("3......Multiplication\n");
    printf("4......Division\n");
    printf("Enter Your Choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        c=a+b;
        printf("The answer is %d",c);
        break;
        case 2:
        c=a-b;
        printf("The answer is %d",c);
        break;
        case 3:
        c=a*b;
        printf("The answer is %d",c);
        break;
        case 4:
        c=a/b;
        printf("The answer is %d",c);
        break;
        default:
        printf("Enter the valid number");
        break;
        
    }
    getch();

}