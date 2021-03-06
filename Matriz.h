#ifndef MATRIZ_H
#define MATRIZ_H
#include "Ponto.h"
#include <stdio.h>

typedef struct matrizy {
    int dim;
    double** distancias;
}MatrizY;

MatrizY* criaMatriz (int dim);

MatrizY* constroiMatriz (FILE* f);

void imprimeMatriz (MatrizY* matriz);

void liberaMatriz (MatrizY* matriz);

#endif