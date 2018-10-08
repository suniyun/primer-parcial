#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "peliculas.h"
#include "director.h"

static int sDirector_generarID(void);
static int sDirector_getInt(int* pResultado);
static int sDirector_isInt(char* pBuffer);

int sDirector_cargarDatosVacio(Director* pDirector, int limite)
{
    int i;
    for(i=0;i<limite;i++)
    {
        pDirector[i].isEmpty=-1;
    }
    return 0;
}

int sDirector_cargarIndice(Director* pDirector,int indice,int limite)
{
    char auxNombre[32];
    char auxNacionalidad[32];
    int auxEdad;
    int auxAnio;

    printf("Nombre:\n");
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

int sDirector_borrarPantallaPorID(Director* pDirector, int id, int limite)
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

static int sDirector_generarID(void)
{
    static int cont = -1;
    return ++cont;
}
