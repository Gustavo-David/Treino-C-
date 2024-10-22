#include <cstdlib>

using namespace std;

void iniciarMatriz(int (*vet)[2]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      vet[i][j] = rand() % 10;
    }
  }
}

void printMatriz(int (*vet)[2]) {
  for (int i = 0; i < 3; i++) {
    cout << "[ ";
    for (int j = 0; j < 3; j++) {
      cout << vet[i][j] << " ";
    }
    cout << "]\n";
  }
}