#include <iostream>

using namespace std;

#include "SGestao.h"
int main()
{
    SGestao SG;
    SG.Load("Pessoas.txt");
    SG.MostrarListaPessoas();
   // SG.Run();

  


    return 0;
}
