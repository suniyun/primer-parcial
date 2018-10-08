#ifndef DIRECTOR_H_INCLUDE
#define DIRECTOR_H_INCLUDE

struct S_Director{
int ID;
char nombre[51];
int edad;
char nacionalidad[51];
int isEmpty;
}typedef Director;

#endif // DIRECTOR_H_INCLUDE

int sDirector_cargarDatosVacio(Director* pDirector, int limite);
int sDirector_cargarIndice(Director* pDirector,int indice,int limite);
int sDirector_borrarPantallaPorID(Director* pDirector, int id, int limite);
