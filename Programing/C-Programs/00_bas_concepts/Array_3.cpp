
#include <stdio.h>
#include <stdlib.h>
#define N 0x100
int main(){
/*Un programa que pida al usuario 10 números enteros y calcule (y muestre) cuál es el
  mayor de ellos.*/
    int numeros[N];
    int mayor=0,
        comparar=0;
    
    printf("Introduce cuantos numeros quieres comparar: ");
    scanf(" %i",&comparar);

    for (int aux=0; aux < comparar; aux++)
    scanf(" %i", &numeros[aux]);
    for(int aux=0; aux < comparar; aux++)
    mayor =  (mayor > numeros[aux]) ? mayor : numeros[aux] ;
    printf("El numero mayor es:  %i\n", mayor);
    

    

    return EXIT_SUCCESS;

}

