#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>

using namespace std;


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
    cout <<"[ ";
    for (int j = 0; j < 3; j++) {
      cout << vet[i][j] << " ";
    }
   cout << "]\n";
  }

  return 0;
}