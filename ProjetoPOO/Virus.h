#ifndef VIRUS_H
#define VIRUS_H

#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <list>
using namespace std;


class Pessoa;
class Virus
{
    list<Pessoa*> LP;

public:
    Virus(string c1);
    virtual ~Virus();
    void AfectarPessoa(Pessoa* P)
    {
        LP.push_back(P);
    }

};


#endif // VIRUS_H
