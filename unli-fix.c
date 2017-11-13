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
	int tokenlen;
	F=fopen("vo.txt","r");
	while (!feof(F))
	{
		buf[0]='\0';
		fgets(buf,1000,F);
		token = strtok(buf, s);
		if (token != NULL)
		{
			printf("-----------------------\n"\
				"enter the translation of %s : ",token);
			scanf("%s",a);
		}
		while (token != NULL)
		{
			//la à partir de la ligne suivante ton token peut etre NULL à nouveau...
			token = strtok (NULL, s);
			// ce qui fait planter ton programme quand il essaie d'afficher une chaine NULL
			if(token != NULL){
				//stripping trailing  \r\n at end of token
				tokenlen = strlen(token);
				token[strlen(token) - 2] = '\0';
				printf("answer \"%s\" (%d letters) \n",token, tokenlen);
				printf("you wrote \"%s\"",a); //
				printf("(distance=%d)\n",strcmp(a,token));
				if(strcmp(token,a)==0)        //||strcmp(info,"name")==0
				{

					printf("well done!\n");
					score++;
				}
				else
				{
					printf("False! Maybe another day!\n");
				}
			}
		}

	}
	fclose(F);
}
