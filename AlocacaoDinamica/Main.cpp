#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "Alocacao.h"
#include "Vetor.h"

using namespace std;
#define TAM 20

int main() {
  int *vet;

  vet = Alocation(TAM);
  iniciarMatriz(vet, TAM);
  printMatriz(vet, TAM);

  return 0;
}