#include <iostream>

using namespace std;

struct User{
    char name[50];
    char email[50];
    int idade;
    int id;
}user;




void Print(string name, string email, int idade, int id){
    cout << "Nome: " << name << " Email: "<< email << " Idade: "<< idade << " Id: "<< id;
}