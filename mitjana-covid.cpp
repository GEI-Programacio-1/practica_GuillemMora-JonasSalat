
#include <stdio.h>

int main() {
   int valor = 0, comptadorcoma = 0;
   float acumulador = 0, comptadorlinia = 0;
   char caracter;
   bool final = false;

   do{
      scanf("%c", &caracter);

		//comptar comes
      if (caracter == ','){
         comptadorcoma++;

         // suma dels valors llegits
         if (comptadorcoma == 3){
            scanf("%i", &valor);
            acumulador = acumulador + valor;
            comptadorcoma = 0;
            comptadorlinia++;
         }
         
      }
      // mostrar el valor de la mitjana per al grup 4 -> (n+1)= 5
      if (comptadorlinia == 5){
         printf(" mitjana %.2f\n",acumulador/comptadorlinia);
         acumulador = 0;
         comptadorlinia = 0;
      }
      
   } while (caracter != '#');
   // mostrara unicament si el numero de linies no es acabat en 5 o en 0 i falten fer mitjes
   if(comptadorlinia != 5 && comptadorlinia > 0){
      printf(" mitjana %.2f\n",acumulador/comptadorlinia);
   }
}
