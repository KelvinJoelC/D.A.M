
#include <stdio.h>
#include <stdlib.h>

int main(){

	/*Carga la variable int opcion con un número entre uno y cinco. 
	 Preguntandole al usuario */
    	int opcion=0;
	
	do{
		printf("Introduce un numero del uno al cinco");
		scanf(" %i", &opcion);
	
	}while (opcion <1 || opcion >5); 	
    
    return EXIT_SUCCESS;
    
}

