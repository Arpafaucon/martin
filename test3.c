#include<stdio.h>
int main()
{
FILE*F=fopen("test.txt","a");
int n,i;
char mot[100];
printf("combien de mots voulez-vous entrez?\n");
scanf("%d",&n);
for (i=0;i<n;i++)
{
    printf("rentrez votre mot");
    scanf("%s",&mot);
    fprintf(F,"%s\n",mot);
}
fclose(F);
}
