
#include <stdio.h>
#include <stdlib.h>
#define N 5
/*Un programa que pida al usuario 5 numero reales
y luego muestre en el orden contrario al que se introdujeron */


int main(){

    float numero[N];
    for (int aux=0; aux < N; aux++){
    printf("Introduce 5 numeros reales: ");
    scanf(" %f", &numero[aux]);
    }

    for (int aux=4; aux >= 0; aux-- ){
    printf(" %f", numero[aux]);
    }
    printf("\n");
    return EXIT_SUCCESS;

}

