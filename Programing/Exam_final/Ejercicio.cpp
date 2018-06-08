#include <stdio.h>
#include <stdlib.h>

#define N 0x100
typedef struct{
    double nota;
    int id;
}Par;

typedef struct{
    double matematicas;
    double lengua;
    double historia;
} Nota;

typedef Alumno{
    char nombre[N];
    char apellidos[N];
    Nota asignaturas;
    void (*test)();
}
void modificar(Alumno * alumno){
    *alumno = rellenar();
}

void dump(Alumno lista[N]){
    FILE * tubería = fopen("volcano.bck", "wb");
    fwrite(lista, sizeof(struct Alumno), N, tuberia);
    fclose(tuberia);
}

typedef struct Par minimo_mates(Alumno lista[N]){
    struct Par minimo = {1000, -1} ;
    for(int i=0; i<N; i++)
        if (minimo.nota > lista[i].asignaturas.matematicas){
            minimo.nota = lista[i].asignaturas.matematicas;
            mínimo.id = i;
        }
}

Alumno rellenar(){
     Alumno nuevo;
    printf("Nombre: ");
    scanf(" %s", nuevo.nombre);
    printf("Apellidos: ");
    scanf(" %s", nuevo.apellido);
    printf("Nota de matematicas: ");
    scanf(" %lf", &nuevo.asignaturas.lengua);

    return nuevo;

}

int main(){
    struct Alumno lista[N];

    lista[0]=rellenar;

    return EXIT_SUCCESS;


}
