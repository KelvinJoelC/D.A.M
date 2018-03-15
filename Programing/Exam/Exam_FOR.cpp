
#include <stdio.h>
#include <stdlib.h>
#define N 3

int main(){
 
	/*Sean dos vectores, a y b de double con 3 celdas cada uno. Calcula la suma
	 de las multiplicaciones de las columnas 0,1,2 de a contra b respectivamente*/
	double a[N]{1,2,3},
    	       b[N]{4,5,6};
	double suma= 0;
	
	for (int aux=0; aux<N; aux++){
		suma += a[aux] * b[aux];
	}	
	printf("Suma: %lf", suma);


   
	
	return EXIT_SUCCESS;
    
}

