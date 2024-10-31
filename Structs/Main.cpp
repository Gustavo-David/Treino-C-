#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <new>

#include "User/User.h"

using namespace std;

int main() {
  User user;

  char name[50];
  char email[50] = "gustavo@gmail.com";
  int idade = 50;
  int id = 83743;

  cout << "Digite o nome: ";
  cin >> name;




  Print(name, email, idade, id);
  return 0;
}