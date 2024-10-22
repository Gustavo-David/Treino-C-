#include <cstdlib>

using namespace std;

void iniciarMatriz(int *vet, int tam) {
  for (int i = 0; i < tam; i++) {
    vet[i] = rand() % 10;
  }
}

void printMatriz(int *vet, int tam) {
  for (int i = 0; i < tam; i++) {
   
    cout << "Psition: " << i + 1  << " | " << vet[i] << " \n";

  }
}