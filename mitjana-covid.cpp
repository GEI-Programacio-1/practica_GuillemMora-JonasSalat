
#include <stdio.h>

int main() {
   int valor = 0, comptadorcoma = 0;
   float acumulador = 0, comptador = 0;
   char caracter;
   bool final = false;

   do{
      scanf("%c", &caracter);

      if (caracter == ','){
         comptadorcoma++;

         if (comptadorcoma == 3){
            scanf("%i", &valor);
            acumulador = acumulador + valor;
            comptadorcoma = 0;
            comptador++;
         }
         
      }
      if (comptador == 5){
         printf(" mitjana %.2f\n",acumulador/comptador);
         acumulador = 0;
         comptador = 0;
      }
      
   } while (caracter != '#');
   if(comptador != 5 && comptador > 0){
      printf(" mitjana %.2f\n",acumulador/comptador);
   }
}
