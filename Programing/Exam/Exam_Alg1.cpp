
#include <stdio.h>
#include <stdlib.h>
#define N 0x100
int main(){


    char ** cadena=NULL;
    char buffer[N];
    int aux=0;

    printf("¿Cuantas palabras vas a introducir?");
    scanf(" %i", aux);
    fgets(buffer,N,stdin);
    cadena=(char**) realloc(cadena,sizeof (char*));
    *cadena = (char*) realloc(*cadena, aux * sizeof(char));


    strncpy(*cadena,buffer,aux);




    return EXIT_SUCCESS;

}

