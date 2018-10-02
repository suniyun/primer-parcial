#include <stdio.h>
#include <stdlib.h>
#include "movies.h"
#define CANTIDAD_PELICULAS 3

int main()
{
    sPeliculas listado[CANTIDAD_PELICULAS];
    sPeliculas indice[CANTIDAD_PELICULAS];
    inicializacion(listado, CANTIDAD_PELICULAS);

    int opciones;

    do
    {
        system("cls");
        fflush(stdin);

        printf(" 1) Ingrese los datos de la pelicula que desea agregar. \n");
        printf(" 2) Listar las peliculas ingresadas. \n");
        printf(" 3) Salir. \n");

        opciones = ingresarInt();

        switch(opciones)
        {
            case 1:
                altasDePeliculas(listado, CANTIDAD_PELICULAS);
                system("pause");
            break;
            case 2:
                mostrarPeliculas(listado, CANTIDAD_PELICULAS);
                system("pause");
            break;
        }
    } while (opciones != 3);

    return 0;
}
