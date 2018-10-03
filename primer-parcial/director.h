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

int borrarPantallaPorID(Director* pDirector, int id, int limite);
