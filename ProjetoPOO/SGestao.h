#ifndef SGESTAO_H
#define SGESTAO_H

#include "Virus.h"
#include "Covid.h"
#include "Pessoa.h"
#include "Uteis.h"

class SGestao
{
    list<Pessoa*> LP;
    list<Pessoa*> LQ;
    list<Pessoa*> LI;
    list<Virus*> L_Virus;

    void LancarVirus();
    void AfectarVirusPessoa(Virus* V, Pessoa* P);
    void EnviarPontoSituacao(const string& nf);
    void Mostrar();

public:
    SGestao();
    virtual ~SGestao();
    bool Load(const string& nf);
    bool Run();
    void MostrarListaPessoas();



};

#endif // SGESTAO_H
