#ifndef PELICULAS_H_INCLUDE
#define PELICULAS_H_INCLUDE

struct S_Pelicula{
int ID;
char titulo[51];
int anio;
char nacionalidad[51];
int isEmpty;
}typedef Pelicula;

#endif // PELICULAS_H_INCLUDE

/**
    cargarDatosVacio: Carga un valor en el mismo campo de todas las posiciones del array recibido.
    \param pPelicula: Guarda el array recibido.
    \param limite: Guarda el int del limite del array.
    \return return 0 OK, -1 Error.
*/
int sPelicula_cargarDatosVacio(Pelicula* pPelicula, int limite);

/**
    cargarIndice: carga valores en la posicion del array recibido.
    \param pPelicula: Guarda el array recibido.
    \param indice: Guarda el int de la posicion del array.
    \param limite: Guarda el int del limite del array.
    \return return 0 OK, -1 Error.
*/
int sPelicula_cargarIndice(Pelicula* pPelicula,int indice,int limite);

/** \brief  buscarPantallaPorID: Recibe un ID para buscar una pelicula.
 * \param   pPelicula: Guarda el array recibido.
 * \param   limite: Guarda el int del limite del array.
 * \param   id: Guarda el int de la pelicula a buscar.
 * \return  return el indice del array donde esta la pelicula
 *
 */

int sPelicula_buscarPantallaPorID(Pelicula* pPelicula, int limite, int id);

 /**    modificarID: Recibe un ID para modificar una posicion del array.
    \param pPelicula: Guarda el array recibido.
    \param id: Guarda el int recibido del ID a modificar.
    \param limite: Guarda el int del limite del array.
    \return return 0 OK, -1 Error.
*/
int sPelicula_modificarID(Pelicula* pPelicula, int indice, int limite);

/**
    borrarPantallaPorID: Recibe un ID para borrar una pelicula.
    \param pPelicula: Guarda el array recibido.
    \param limite: Guarda el int del limite del array.
    \param id: Guarda el int del pelicula a borrar.
    \return return 0 OK, -1 Error.
*/

int sPelicula_borrarPantallaPorID(Pelicula* pPelicula, int id, int limite);

/**
    borrarPantallaPorID: Recibe un ID para borrar una pelicula.
    \param pPelicula: Guarda el array recibido.
    \param limite: Guarda el int del limite del array.
    \param id: Guarda el int del pelicula a borrar.
    \return return 0 OK, -1 Error.
*/

int sPelicula_getEntero(int* pNum,int reint,char* msg,char* msgError,int maximo,int minimo);
int sPelicula_getString(char* pBufferString,int limite);

