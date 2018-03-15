
#include <stdio.h>
#include <stdlib.h>
/*Indicamos las funciones existentes*/
void leer(int *dato1,int *dato2);

int main(){
	/*Inicializamos las variables donde se van a guardar*/
	int CualquierCosa1, 
	    CualquierCosa2;
	/*Llamamos a la funcion leer*/
	leer(&CualquierCosa1,&CualquierCosa2); 
    	printf("%i\n", CualquierCosa1);
	printf("%i\n", CualquierCosa2);

	
    return EXIT_SUCCESS;
    
}
/*Creamos las funcion leer*/
/*Esperamos que nos devuelva lo que hay allí donde apunta dato1 y dato2*/
void leer(int *dato1, int *dato2){
	
	printf("Introduce el primer numero: ");
	scanf(" %i", dato1);
	/*Guardamos un entero en lo que hay en dato1*/
	printf("Introduce el segundo numero: ");
	/*Guardamos un entero en lo que hay en dato1*/
	scanf(" %i", dato2);
}
