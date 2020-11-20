#include "Pessoa.h"

Pessoa::Pessoa(int id, string nome, string conselho, int idade)
{
   ID = id;
   Nome = nome;
   Concelho = conselho;
   Idade = idade;
}

Pessoa::~Pessoa()
{
    //dtor
}
bool Pessoa::Run()
{
    cout << "A Viver..." << endl;
    Deslocar();
    Mostrar();
    return true;
}

void Pessoa::Deslocar()
{
    X += 1;
}

void Pessoa::Mostrar()
{
    cout << "(" << ID << "," << Nome << "," << Concelho << ","<< Idade <<")" << endl;
 }

