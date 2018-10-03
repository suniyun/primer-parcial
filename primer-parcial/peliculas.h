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

int cargarIndice(Pelicula* pPelicula,int indice,int limite);
int modificarID(Pelicula* pPelicula, int indice, int limite);
int borrarPantallaPorID(Pelicula* pPelicula, int id, int limite);
int buscarPantallaPorID(Pelicula* pPelicula, int limite, int id);


