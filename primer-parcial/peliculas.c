#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "peliculas.h"
#include "director.h"

static int generarID(void);

/**
    cargarIndice: carga valores en la posicion del array recibido.
    \param pPelicula: Guarda el array recibido.
    \param indice: Guarda el int de la posicion del array.
    \param limite: Guarda el int del limite del array.
    \return return 0 OK, -1 Error.
*/
int cargarIndice(Pelicula* pPelicula,int indice,int limite)
{
    char auxTitulo[32];
    char auxNacionalidad[32];
    int auxAnio;

    printf("Titulo:\n");
    if(getString(auxTitulo,32)==0)
    {

                printf("Nacionalidad: \n");
                if(getString(auxNacionalidad,128)==0)
                {
                    if(getEntero(&auxAnio,2,"Anio: \n", "\nError\n",4,0) == 0)
                    {
                                strncpy(pPelicula[indice].titulo,auxTitulo,32);
                                strncpy(pEmpleados[indice].nacionalidad,auxNacionalidad,128);
                                pEmpleados[indice].anio = auxAnio;
                                pEmpleados[indice].isEmpty = 0;
                                pEmpleados[indice].ID = generarID();

                    }
                }

    }
    return 0;
}

/** \brief  buscarPantallaPorID: Recibe un ID para buscar una pelicula.
 * \param   pEmpleado: Guarda el array recibido.
 * \param   limite: Guarda el int del limite del array.
 * \param   id: Guarda el int de la pelicula a buscar.
 * \return  return el indice del array donde esta la pelicula
 *
 */

int buscarPantallaPorID(Pelicula* pPelicula, int limite, int id)
{
    int i;
    int retorno = -1;
    for(i = 0; i < limite; i++)
    {
        if(pPelicula[i].isEmpty == 0 && pPelicula[i].ID == id)
        {
            retorno = i;
            break;
        }
    }
    return retorno;
}

/**    modificarID: Recibe un ID para modificar una posicion del array.
    \param pPelicula: Guarda el array recibido.
    \param id: Guarda el int recibido del ID a modificar.
    \param limite: Guarda el int del limite del array.
    \return return 0 OK, -1 Error.
*/

int modificarID(Pelicula* pPelicula, int indice, int limite)
{
    char auxTitulo[51];
    char auxNacionalidad[51];
    int auxAnio;
    int id;
    int opciones;
    int salir=0;
    id = buscarPantallaPorID(pPelicula,limite,indice);
    if(id >= 0)
    {
        if(pPelicula != NULL && limite >0)
        {
            do
            {
                system("cls");
                fflush(stdin);
                getEntero(&opciones,4,"1)Modificar titulo:\n2)Modificar nacionalidad:\n3)Modificar anio:\n)-Salir\n","\nError\n",6,0);
                switch(opciones)
                {
                        case 1:
                            printf("Nuevo titulo:\n");
                            if(getString(auxtitulo,51)==0)
                            {
                                 strncpy(pPelicula[indice].titulo,auxTitulo,51);
                            }
                            break;
                        case 2:
                             printf("Nueva nacionalidad: \n");
                            if(getString(auxNacionalidad,128)==0)
                            {
                                strncpy(pPelicula[indice].nacionalidad,auxPelicula,51);
                            }
                            break;
                        case 3:
                            if(getEntero(&auxAnio,2,"Nuevo Anio: \n", "\nError\n",4,0) == 0)
                            {
                                pPeliculaindice].anio = auxAnio;
                            }
                            break;
                        case 4:
                        salir = 1;
                }
            }while(salir==0);
        }
    }
    return 0;
}

/**
    borrarPantallaPorID: Recibe un ID para borrar una pelicula.
    \param pPelicula: Guarda el array recibido.
    \param limite: Guarda el int del limite del array.
    \param id: Guarda el int del pelicula a borrar.
    \return return 0 OK, -1 Error.
*/

int borrarPantallaPorID(Pelicula* pPelicula, int id, int limite)
{
    int retorno = -1;
    int i;
    for(i = 0; i < limite; i++)
    {
        if(pPelicula[i].isEmpty == 0 && pPelicula[i].ID == id)
        {
            pPelicula[i].isEmpty = -1;
            retorno = 0;
            break;
        }
    }
    return retorno;
}

/**
    generarID: Genera un ID. Comienza en -1 para ir generando IDs desde el 0 en adelante.
    \param cont: Contador.
    \return return cont + 1.
*/

static int generarID(void)
{
    static int cont = -1;
    return ++cont;
}
