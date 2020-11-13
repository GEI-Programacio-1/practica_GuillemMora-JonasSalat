
#include <stdio.h>

int main() {
   int contador = 0;
   char caracter;

   scanf("%c", &caracter);
   while( caracter != '#' ) {
      contador = contador+1;
      scanf("%c", &caracter);
   }
   printf("Resultat %i\n", contador);
   printf("#");
}
