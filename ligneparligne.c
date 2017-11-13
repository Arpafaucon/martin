#include <stdio.h>

int main ( void )
{
   static const char filename[] = "file.txt";
   FILE *file = fopen ( filename, "r" );
   if ( file != NULL )
   {
      char line [ 128 ]; /* or other suitable maximum line size */

      while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
      {
         printf("Ligne : %s", line); /* write the line */
      }
      fclose ( file );
   }
   else
   {
      perror ( filename ); /* why didn't the file open? */
   }
   return 0;
}
