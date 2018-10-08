#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "peliculas.h"
#include "director.h"

static int sPelicula_generarID(void);
static int getInt(int* pResultado);
static int isInt(char* pBuffer);

int sPelicula_cargarDatosVacio(Pelicula* pPelicula, int limite)
{
    int i;
    for(i=0;i<limite;i++)
    {
        pPelicula[i].isEmpty=-1;
    }
    return 0;
}

int sPelicula_cargarIndice(Pelicula* pPelicula,int indice,int limite)
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

int sPelicula_buscarPantallaPorID(Pelicula* pPelicula, int limite, int id)
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

int sPelicula_modificarID(Pelicula* pPelicula, int indice, int limite)
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

int sPelicula_borrarPantallaPorID(Pelicula* pPelicula, int id, int limite)
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

static int sPelicula_generarID(void)
{
    static int cont = -1;
    return ++cont;
}

int sPelicula_getString(char* pBufferString,int limite)
{
    fflush(stdin);
    fgets(pBufferString,limite,stdin);
    if(pBufferString[strlen(pBufferString)-1]=='\n')
    {
        pBufferString[strlen(pBufferString)-1]='\0';
    }
    return 0;
}
int sPelicula_getEntero(int* pNum,int reint,char* msg,char* msgError,int maximo,int minimo)
{
    int auxiliarNum;
    int retorno = -1;
    for(;reint>0;reint--)
    {
        printf(msg);
        if(getInt(&auxiliarNum) == 0)
        {
            if(auxiliarNum > minimo && auxiliarNum < maximo)
            {
                *pNum = auxiliarNum;
                retorno = 0;
                break;

            }else
            {
                printf(msgError);
            }


        }else
        {
            printf(msgError);
        }
    }


    return retorno;
}

static int getInt(int* pResultado)
{
    int retorno=-1;
    char bufferString[4096];
    if(pResultado != NULL)
    {
        if(getString(bufferString,4096) == 0 && isInt(bufferString)==0)
        {

            *pResultado=atof(bufferString);
            retorno=0;

        }
    }
    return retorno;
}

static int isInt(char* pBuffer)
{
    int i=0;
    int retorno=0;
    while(pBuffer[i] != '\0')
    {
        if(pBuffer[i] < '0' || pBuffer[i] > '9')
        {
            retorno=-1;
            break;
        }
        i++;
    }
    return retorno;
}
