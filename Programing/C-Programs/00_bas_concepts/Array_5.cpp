
#include <stdio.h>
#include <stdlib.h>
#define N 0x100 

/*Un programa que te pida una palabra, y la almacene en la variable llamada “texto”.
  Luego deberá pedir una segunda palabra, y añadirla al final de “texto”. Finalmente,
  deberá pedir una tercera palabra, y guardarla en la variable “texto” y en otra variable
  llamada “texto2”.*/



int main(){
    
     char texto[N],
          texto2[N];
     puts("Dime tu nombre: ");
     scanf(" %s", texto );
     puts("Dime tu apellido: ");
     scanf(" %s", *(texto +1));
     puts("Dime tu segundo apellido: ");
     scanf(" %c", texto2);
     printf(" %c",*texto);
     printf(" %c",*texto2);


    
    return EXIT_SUCCESS;
    
}

