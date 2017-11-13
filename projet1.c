#include<stdio.h>
void main()
{
int a,game;
printf(" hello \n do you want to add vocabulary? \n 1-Yes    2-No ");
scanf("\n Your answer: %d",a);
add_voc();

FILE* fichier = NULL;
fichier = fopen("voc.csv","r");
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
    goto(8)
}
}
void add_voc()
{
int longueur,i ;
char ajout[100], traduction[100];
 printf("entrez le nombre de mots que vous souhaitez ajouter\n");
 scanf("%d", &longueur);
 for (i=0;i<longueur; i++)
 {
     printf("entrez le %d ème mot",i);
     scanf("%s",&ajout);
     FILE*F=fopen("vo.txt","a");
     fprintf(F,"%s\n",ajout);
     fclose(F);
     return 0 ;

     printf("entrez la traduction en français\n");
     scanf("%s",&atraduction);
     FILE*F=fopen("vf.txt","a");
     fprintf(F,"%s\n",traduction);
     fclose(F);
     return 0 ;
 }
}
void sudden_death()
{

for (ligne=0;ligne<taille;ligne+=1)//je veux parcourir le document d'abord dans l'ordre puis aléatoirement
{

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
