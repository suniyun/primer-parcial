#ifndef MOVIES_H_INCLUDED
#define MOVIES_H_INCLUDED

typedef struct
{
    char titulo[1001][51];
    int anio[1001];
    char nacionalidad[1001][21];
    int director;
    int idPelicula;
    int estado;

}sPeliculas;

#endif // MOVIES_H_INCLUDED

int buscarEspacioLibre(sPeliculas[], int limite);
int inicializacionPeliculas(sPeliculas[], int limite);
int altasDePeliculas(sPeliculas[], int limite);
int mostrarPeliculas(sPeliculas[], int limite);


int getString(char* caracter , int limite);
int getInt(int* numero, int resultadoInt, int maximo, int minimo);
int ingresarInt(void);
