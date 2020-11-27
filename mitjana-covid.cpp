
#include <stdio.h>

int main() {
   int valor = 0, comptadorcoma = 0;
   float acumulador = 0, comptadorlinia = 0;
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
            comptadorlinia++;
         }
         
      }
      if (comptadorlinia == 5){
         printf(" mitjana %.2f\n",acumulador/comptadorlinia);
         acumulador = 0;
         comptadorlinia = 0;
      }
      
   } while (caracter != '#');
   if(comptadorlinia != 5 && comptadorlinia > 0){
      printf(" mitjana %.2f\n",acumulador/comptadorlinia);
   }
}
