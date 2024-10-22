#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include "Matriz.h"

using namespace std;

int main() {
  int vet[2][2];

  iniciarMatriz(vet);

  printMatriz(vet);

  return 0;
}