
#include <stdio.h>
#include <stdlib.h>
/*Crea una reserva de memoria para que quepa un double.
  Guarda 3.5 en dicha reserva
  Amplia para que quepa 2 double.
  Guarda 7.8 en la segunda posición*/
int main(){

	double *reserva = NULL;

    reserva =(double *)malloc(sizeof(double));
    *reserva = 3.5;
    reserva = (double *)realloc(reserva, 2 * sizeof(double));
    *(reserva+1)= 7.8;	
    free(reserva);


    return EXIT_SUCCESS;
    
}

