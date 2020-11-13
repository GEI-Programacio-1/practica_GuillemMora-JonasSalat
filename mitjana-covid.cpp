
#include <stdio.h>

int main() {
   int acumulador = 0, valor;

   scanf("%i", &valor);
   while( valor != 0 ) {
      acumulador = acumulador + valor;
      scanf("%i", &valor);
   }
   printf("Resultat %i\n", acumulador);
}
