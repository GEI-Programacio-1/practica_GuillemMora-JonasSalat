
#include <stdio.h>

int main() 
{
   int contador = 0;
   char caracter, char1, char2, char3;
   bool EsMun = false;

   scanf("%c", &caracter);
   while( caracter != '#' ) 
   {
      if(caracter == ',')
      {
         contador = contador+1;
         if (contador == 4)
         {
            scanf("%c", &char1);
            scanf("%c", &char2);
            scanf("%c", &char3);
            if(char1 == 'L' && char2 == 'l' && char1 == 'e')
            {
               EsMun = true;

            }
         }
         else if (contador == 9)
         {
            if (EsMun == true)
            {
               scanf("%c", &caracter);
               printf("%c\n", caracter);
            }
            
            contador = 0;
            EsMun = false;
         }
      }
      scanf("%c", &caracter);
   }
   
}
