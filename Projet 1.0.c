#include<stdio.h>
#include<random>
void main()
{
int a,game;
printf(" hello \n do you want to add vocabulary? \n 1-Yes    2-No ");
scanf("\n Your answer: %d",a);
if (a==1)
    {add_voc();}
else
    {
printf("\n Choose your game mode: \n 1-sudden death     2-time trial     3-unlimited    4-1v1");
scanf("\n Your answer: %d",game);
switch(game)
        {
    case(1)
    sudden_death();
    case(2)
    time_trial();
    case(3)
    unlimited();
    case(4)
    oneVone();
    default
    printf("you haven't entered a correct game number")
        }
    }
}
void sudden_death()
{
    int score;

for (ligne=0;ligne<taille;ligne+=1)
    {if (answer==traduction)
        {
            score++;
            printf("/n bien !");
        }
     else
        {printf("/n faux !")
        }
    }
}
void time_trial()
{

}
void unlimited()
{

}
void oneVone()
{

}

void aleatoire()
{
int alea;
alea=random_shuffle();
}
