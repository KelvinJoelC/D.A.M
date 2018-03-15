
#include <stdio.h>
#include <stdlib.h>


/*Crea una reserva de memoria para que quepa un double.
  Guarda 3.5 en dicha reserva
  Amplia para que quepa 2 double.
  Guarda 7.8 en la segunda posición*/
int main(){

	double *reserva = NULL;
    /*1º creamos una reserva de memoria con al tamaño de un double te devuelve un 
     la dirección de memoria de un double */
    reserva =(double *)malloc(sizeof(double));
    /*reserva pasa a valer una dirección de memoria donde cabe un double*/
    *reserva = 3.5;
    /*"Lo que hay allí donde apunta reserva(cualquier cosa) pasa a valer 3.5"*/
    /*Ampliamos reserva para que no quepa un double, sino 2 doubles*/
    reserva = (double *)realloc(reserva, 2 * sizeof(double));
    /*Lo que vale reserva =             |<-dos doubles  ->|*/
    *(reserva+1)= 7.8;	
    /*Lo que hay alli donde apunta reserva +1 pasa a valer 7.8
      reserva valía 3.5 pero lo ampliamos y valía 3.5+un espacio vacio donde cabe un
      double. Finalmente reserva vale 3.57.8*/
    free(reserva);
    /*Sirve para liberar la memoria*/


    return EXIT_SUCCESS;
    
}

