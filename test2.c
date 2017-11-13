#include<stdio.h>
int main()
{
FILE*F=fopen("test.txt","w");
fprintf(F,"%d%f%s\n",5,0.6,"plouf");
fclose(F);
return 0 ;
}
