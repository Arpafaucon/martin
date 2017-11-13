#include<stdio.h>
void main()
{
    add_voc();
}
void add_voc()
{
int longueur,i ;
char ajout[100];
 printf("entrez le nombre de mots que vous souhaitez ajouter\n");
 scanf("%d", &longueur);
 for (i=0;i<longueur; i++)
 {
     printf("entrez votre mot et sa traduction séparée d'un '-' : ");
     scanf("%s",&ajout);
     FILE*F;
     F=fopen("C://Users//Martin Roussel//Documents//scolaire//informatique//Programme I2//vo.txt","a");
     fprintf(F,"%s\n",ajout);
     fclose(F);


 }
}
