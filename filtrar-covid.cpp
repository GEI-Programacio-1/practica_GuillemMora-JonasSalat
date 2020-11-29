
#include <stdio.h>


int main() {
   int contador = 0, covid;
   char caracter, char1, char2, char3;
   bool EsMun = false;

	// inici lectura
	scanf("%c", &caracter);
   
	while( caracter != '#' ){

		//comptar comes
		if(caracter == ','){

			contador = contador+1;
         
			// analitzar si els 3 primers caracters corresponen a Lle de Lleida
			if (contador == 4){
            
				scanf("%c", &char1);
            	scanf("%c", &char2);
            	scanf("%c", &char3);
            
				if(char1 == 'L' && char2 == 'l' && char3 == 'e'){

               	EsMun = true;

            }
			// mostrar dades de valor enter a partir del municipi analitzat
         }else if (contador == 8){
        	if (EsMun == true){
               
				printf("%c", caracter);
				scanf("%i", &covid);
            	printf("%i\n", covid);

            }
            // reset de linia
            contador = 0;
            EsMun = false;

         }
      }
	  // mostrar dades a partir del municipi analitzat
	  if ((contador > 4) && (contador < 8) && (EsMun == true) && !((contador == 5) && (caracter == ','))){

		printf("%c", caracter);

		}
      scanf("%c", &caracter);
   }
   // imprimir delimitador de final del programa
      printf("#\n");
}
