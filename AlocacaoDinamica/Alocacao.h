#include <stdlib.h>
#include <stdio.h>

int *Alocation(int size){
    int *aux;
    aux = (int*) malloc(size * sizeof(int));
    return aux;
}