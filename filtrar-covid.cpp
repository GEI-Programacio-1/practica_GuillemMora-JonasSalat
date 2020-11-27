
#include <stdio.h>

int main() 
{
   int contador = 0, covid;
   char caracter, char1, char2, char3, campscorrectes;
   bool EsMun = false;

   scanf("%c", &caracter);
   
   while( caracter != '#' ){
      //printf("entra al bucle \n");

      if(caracter == ','){
         //printf("entra al condicional de la coma \n");

         contador = contador+1;
         
		 if (contador == 4){
            //printf("entra al condicional de la posició 4 \n");
            
			scanf("%c", &char1);
            scanf("%c", &char2);
            scanf("%c", &char3);
            
			if(char1 == 'L' && char2 == 'l' && char3 == 'e'){
               //printf("entra al condicional dels caracters Lle \n");

               EsMun = true;
            }
         }else if ((contador > 5) && (contador < 8)){
			if (EsMun == true){
               printf("%c", caracter);
            }
		 }	 
         else if (contador == 8){
            if (EsMun == true){
               //printf("entra al condiciona de si es el Municipi \n");
               
			   printf("%c", caracter);
			   scanf("%i", &covid);
               printf("%i\n", covid);
            }
            
            contador = 0;
            EsMun = false;
         }
      }else if ((contador > 4) && (contador < 8)){
			if (EsMun == true){
               printf("%c", caracter);
            }
		}
      scanf("%c", &caracter);
   }
      printf("-1\n");
}
