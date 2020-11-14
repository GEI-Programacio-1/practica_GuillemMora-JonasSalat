
#include <stdio.h>

int main() {
   int acumulador = 0, valor, comptador = 0;

   scanf("%i", &valor);
   while( valor != -1 ) 
   {
      acumulador = acumulador + valor;
      scanf("%i", &valor);
      comptador++ ;
      if (comptador == 5)
      {
         printf("%i\n",acumulador/comptador);
         acumulador = 0;
         comptador = 0;
      }
   }
   printf("%i\n",acumulador/comptador);
}
