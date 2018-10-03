#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "peliculas.h"
#include "director.h"

/**
    borrarPantallaPorID: Recibe un ID para borrar un director.
    \param pPelicula: Guarda el array recibido.
    \param limite: Guarda el int del limite del array.
    \param id: Guarda el int del director a borrar.
    \return return 0 OK, -1 Error.
*/

int borrarPantallaPorID(Director* pDirector, int id, int limite)
{
    int retorno = -1;
    int i;
    for(i = 0; i < limite; i++)
    {
        if(pDirector[i].isEmpty == 0 && pDirector[i].ID == id)
        {
            pDirector[i].isEmpty = -1;
            retorno = 0;
            break;
        }
    }
    return retorno;
}
