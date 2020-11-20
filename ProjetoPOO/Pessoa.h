#ifndef PESSOA_H
#define PESSOA_H


#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <list>
using namespace std;

#include "Virus.h"
class Pessoa
{
    int X, Y;
    int ID, Idade;
    string Nome, Concelho;
    list<Virus*> LV;
public:
    Pessoa(int id, string nome, string conselho, int idade );
    virtual ~Pessoa();
    bool Run();
    void Mostrar();
    void Deslocar();
    void Load();
};

#endif // PESSOA_H
