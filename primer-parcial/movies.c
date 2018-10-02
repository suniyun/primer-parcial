#include <stdio.h>
#include <stdlib.h>
#include "movies.h"
#include <string.h>

int inicializacion(sPeliculas listado[], int limite)
{
    int i;
    int retorno = -1;

    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            listado[i].estado = 1;
            listado[i].idPelicula = 0;

        }
    }
    return retorno;
}

int buscarEspacioLibre(sPeliculas listado[], int limite)
{
    int retorno = -1;
    int i;

    if(limite > 0 && listado != NULL)
    {
        for(i=0; i<limite; i++)
        {
            retorno = -2;
            if(listado[i].estado == 1)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

int altasDePeliculas(sPeliculas listado[], int limite)
{
    int retorno = -1;
    char auxTitulo[51];
    int auxAnio;
    char auxNacionalidad[21];
    int auxDirector;
    int id;
    int indice;

    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        indice = buscarEspacioLibre(listado, limite);
        if (indice >=0)
        {
            retorno = -3;
            printf("Titulo: ");
            if(getString(auxTitulo, 51) == 0)
            {
                if(getInt(auxAnio, "Año: ", 9999, 0) == 0)
                {
                    printf("Nacionalidad: ");
                    if(getString(auxNacionalidad, 21) == 0)
                }
            }
        }
    }
}

int mostrarPeliculas(sPeliculas listado[], int limite)
{
    int retorno = -1;
    int i;

    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == 0)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

int getString(char* caracter, int limite)
{
    fflush(stdin);
    if(caracter[strlen(caracter)-1] == '\n')
    {
        caracter[strlen(caracter)-1] = '\0';
    }
    return 0;
}

int getInt(int* numero, int resultadoInt, int maximo, int minimo)
{
    int numeroAuxiliar;
    int retorno = -1;
    for(; resultadoInt > 0; resultadoInt--)
    {
        if(numeroAuxiliar == 0)
        {
            if(numeroAuxiliar > minimo && numeroAuxiliar < maximo)
            {
                *numero = numeroAuxiliar;
                retorno = 0;

                break;
            }
        }
    }
    return retorno;
}
int ingresarInt(void)
{
    int numero;
    printf("Ingrese una opcion: ");
    scanf("%d", &numero);

    return numero;
}

