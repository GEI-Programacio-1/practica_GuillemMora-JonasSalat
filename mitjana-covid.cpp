
#include <stdio.h>

int main() {
   int acumulador = 0, valor, comptador = 0, contador = 0;
   char caracter;
   bool final = false;

   do{
      scanf("%c", &caracter);
      printf("%c", caracter);

      if (caracter == ','){
         contador++;
         printf("%i", contador);

         if (contador == 3){
            scanf("%i", &valor);
            acumulador = acumulador + valor;
         }
         
      }else if (caracter == '-'){
         scanf("%c", &caracter);
         if (caracter == '1'){
            final = true;
         }
         
      }   
   } while (!final);
   

   /* scanf("%i", &valor);
   while( valor != -1 ) 
   {
      acumulador = acumulador + valor;
      scanf("%i", &valor);
      comptador++ ;
      if (comptador == 3)
      {
         printf("%i\n",acumulador/comptador);
         acumulador = 0;
         comptador = 0;
      }
   } */
   printf("%i\n",acumulador/comptador);
}
