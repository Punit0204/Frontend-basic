#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int main(){
int num,guess,nguess=1;
srand(time(0));
num=rand()%100 +1;   //genrates number between 1 to 100;
//printf("The number is %d",number);
//keep running untill the Number is gussed;
printf("\t\t\t******GUESSING THE NUMBER********\n\n");
do{
    printf("Guess The number between 1 to 100 \n");
    scanf("%d",&guess);
    if(guess>num){
         printf("Lower Number Please! \n");
    }
    else if(guess<num)
    {
         printf("Higher Number Please! \n");
    }
    else{
        printf("You guess the number in %d attempts\n",nguess);
    }
    nguess++;

}
while (guess!=num);
return 0;
}