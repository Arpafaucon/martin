#include<stdio.h>
#include<string.h>
int main()
{
int score=0;
const char s[2] = "-";
char*token;
char a[100];
char buf[1000];
FILE*F;
F=fopen("vo.txt","r");
while (!feof(F))
    {
    buf[0]='\0';
    fgets(buf,1000,F);
    token = strtok(buf, s);
    if (token != NULL)
    {
        printf("enter the translation of %s : ",token);
        scanf("%s",&a);
    }
    while (token != NULL)
        {
        token = strtok (NULL, s);
        printf("%s\n",token);
        printf("%d",a);
        printf("%d",strcmp(a,token));
        if(strcmp(token,a)==0)        //||strcmp(info,"name")==0
           {

               printf("well done!");
               score++;
           }
        else
            {
                printf("False! Maybe another day!");
            }
        }
    }
fclose(F);
}
