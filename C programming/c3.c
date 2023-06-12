#include<stdio.h>
#include<conio.h>
void main ()
{
    int a,total,m,e,c,p,g;
    float avg,per;
    char n[100];
    
    printf("Welcome To Marksheet Making Server Of India\n");
    printf("Enter the name\n");
    scanf("%s",&n);
    printf("Your Standard \n");
    scanf("%d",&a);
    printf("Enter Your Roll Number\n");
    scanf("%d",&a);
     printf("Marks Obtained in Maths \n");
     scanf("%d",&m);
    printf("Marks Obtained in Physics \n");
    scanf("%d",&p);
    printf("Marks Obtained in chemistry \n");
    scanf("%d",&c);
    printf("Marks Obtained in English \n");
    scanf("%d",&e);
    printf("Marks Obtained in Gujarati \n");
    scanf("%d",&g);

   total=m+e+g+c+p;
   avg=total/5;
printf("Total Marks Obtained %f\n",avg);

per=(total/500)*100;
printf("Your Percentile From Above Score is %f\n",per);
getch();
}