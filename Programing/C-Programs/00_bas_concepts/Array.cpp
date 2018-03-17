
#include <stdio.h>
#include <stdlib.h>
#define N 4
int main(){
/*Un programa que pida al usuario 4 números, los memorice (utilizando una tabla),
  calcule su media aritmética y después muestre en pantalla la media y los datos
  tecleados.*/
    int insertar[N];
    int  suma=0, media=0;
    for (int i=0; i<N; i++){
    printf("Introduce numeros para calcular la media aritmética: ");
    scanf(" %i",&insertar[i]);
    suma += insertar[i];

}
    for (int j=0; j<N; j++){
    printf(" %i\n", insertar[j]);

    }
    printf("La suma total es: %i\n",suma);
    media = suma / N;
    printf("La media es:  %i\n",media );

    return EXIT_SUCCESS;

}

