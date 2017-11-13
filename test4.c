#include<stdio.h>
int main()
{
FILE*F;
char buf[1000];
printf("-- lecture2\n");
F= fopen("test.txt","r");
while(!deof(F))
{
    buf[0]= '\0';
    fgets(buf,1000,F);
    printf("%s",&buf);
}
fclose(F);
}
