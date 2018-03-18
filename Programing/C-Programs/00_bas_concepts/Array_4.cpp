
#include <stdio.h>
#include <stdlib.h>
#define N 12
int main(){
    char  meses[N][20] = {"Enero", "Febrero", "Marzo", "Abril","Mayo",
        "Junio", "Julio", "Agosto", "Septiempre",
        "Octubre", "Noviembre", "Diciembre"};

    int eleccion=0;
    do {
        printf("Dime que mes quieres 1=Enero-12=Dicimbre: ");
        scanf(" %i", &eleccion);
    }
    while (eleccion<1 || eleccion > 12);

    printf("Tu mes es: %s\n", meses[eleccion-1]);
    return EXIT_SUCCESS;

}

