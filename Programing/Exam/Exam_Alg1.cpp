#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define N 0x100
int main(){


    char ** cadena=NULL;
    char buffer[N];
    int longitud;
    int aux=0;

    printf("¿Cuantas palabras vas a introducir?: ");
    scanf(" %i", &aux);
  
    printf("Introduce %i palabras ",aux);

    for(int i=0; i <aux; i++){
    scanf(" %s",buffer);
    longitud = strlen(buffer);
    cadena=(char**) realloc(cadena,(i+1) * sizeof (char*));
    *(cadena+i) = (char*) realloc(*(cadena+i), longitud * sizeof(char));

    strncpy(*(cadena+i),buffer,longitud);
    }
    printf("\n");
    for(int j=0; j<aux; j++){
    printf("%s\n", *(cadena+j));
    }
    for(int j=0; j <aux;j++){
    free(*(cadena+j)); 
    }




    return EXIT_SUCCESS;

}

