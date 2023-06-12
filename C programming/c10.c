#include<stdio.h>// practise 
#include<conio.h>// Tax bill;
void main()
{
int inc,tax,inco;
printf("Enter Your income");
scanf("%d",&inc);
if(inc>0&&inc<5000)
{
    printf("Your Income is %d\n",inc);
}
else if(inc>5001 && inc<10000)
{
    tax=inc*5/100;
    inco=inc-tax;
    printf("You have to pay tax %d\n",tax);
    printf("Your Income after tax %d\n",inco);

}
else if(inc>10001 && inc<20000)
{
    tax=inc*10/100;
    inco=inc-tax;
     printf("You have to pay tax %d\n",tax);
    printf("Your Income after tax %d\n",inco);


}
else
{
  tax=inc*15/100;
  inco=inc-tax;
   printf("You have to pay tax %d\n",tax);
    printf("Your Income after tax %d\n",inco);

}
getch();
}