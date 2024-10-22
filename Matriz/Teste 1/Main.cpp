#include <stdio.h>
#include <stdlib.h>

#include <cstdlib>

int main() {
  int vet[2][2];

  srand(10);
  for (int i = 0; i < 3; i++) {

   
    for (int j = 0; j < 3; j++) {

      vet[i][j] = rand() % 10;
   
    }
  }

  ///////////////////////////////////////////////////////////////////////////////////////


  for (int i = 0; i < 3; i++) {
    printf("[ ");
    for (int j = 0; j < 3; j++) {
      printf("%i ", vet[i][j]);
    }
   printf("]\n");
  }

  return 0;
}