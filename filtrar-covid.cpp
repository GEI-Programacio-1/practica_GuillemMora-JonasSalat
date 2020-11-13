
#include <stdio.h>

int main() 
{
   int contador = 0, cockvid;
   char caracter, char1, char2, char3;
   bool EsMun = false;

   scanf("%c", &caracter);
   while( caracter != '#' ) 
   {
      //printf("entra while#\n");
      if(caracter == ',')
      {
         //printf("ifComa\n");
         contador = contador+1;
         if (contador == 4)
         {
            //printf("if4\n");
            scanf("%c", &char1);
            //printf("%c\n", char1);
            scanf("%c", &char2);
            //printf("%c\n", char2);
            scanf("%c", &char3);
            //printf("%c\n", char3);
            if(char1 == 'L' && char2 == 'l' && char3 == 'e')
            {
               //printf("iflleida\n");
               EsMun = true;

            }
         }
         else if (contador == 8)
         {
            if (EsMun == true)
            {
               //printf("entra ifMUN\n");
               scanf("%i", &cockvid);
               printf("%i\n", cockvid);
            }
            
            contador = 0;
            EsMun = false;
         }
      }
      scanf("%c", &caracter);
   }
      printf("-1\n");
}
