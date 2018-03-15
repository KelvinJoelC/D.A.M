
#include <stdio.h>
#include <stdlib.h>

void leer(int *dato1,int *dato2);

int main(){
	int CualquierCosa1, 
	    CualquierCosa2;
	
	leer(&CualquierCosa1,&CualquierCosa2); 
    	printf("%i\n", CualquierCosa1);
	printf("%i\n", CualquierCosa2);

	
    return EXIT_SUCCESS;
    
}

void leer(int *dato1, int *dato2){
	
	printf("Introduce el primer numero: ");
	scanf(" %i", dato1);
	printf("Introduce el segundo numero: ");
	scanf(" %i", dato2);
}
