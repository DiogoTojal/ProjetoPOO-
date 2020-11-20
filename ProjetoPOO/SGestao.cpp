#include "SGestao.h"

SGestao::SGestao()
{
    //ctor
}

SGestao::~SGestao()
{
    //dtor
}
bool SGestao::Load(const string &nf)
{
    string line;
    
    ifstream fs(nf);
    if (fs.is_open())
    {      
        while (getline(fs, line))
        {
            string lpartes[4];
            Uteis::PartirString(line, lpartes);
           /* cout << "lpartes [0]" << lpartes[0] << endl;
            cout << "lpartes [1]" << lpartes[1] << endl;
            cout << "lpartes [2]" << lpartes[2] << endl;
            cout << "lpartes [3]" << lpartes[3] << endl;*/
            int ID = stoi(lpartes[0]);
            int Idade = stoi(lpartes[3]);
            LP.push_back(new Pessoa(ID, lpartes[1], lpartes[2], Idade));
        }
    } 
    return true;
}

void SGestao::MostrarListaPessoas()
{
    for (list<Pessoa*>::iterator it = LP.begin(); it != LP.end(); ++it)
    {
        (*it)->Mostrar();
    }
}

bool SGestao::Run()
{
    bool E_de_DIA = true;
    while (E_de_DIA)
    {
        for (list<Pessoa*>::iterator IT = LP.begin(); IT != LP.end(); ++IT)
        {
            (*IT)->Run();
        }
        //.... Coração da simulação
//        Analisar_Propagacao_Virus();
        EnviarPontoSituacao("servidor.txt");
        Mostrar();
        //Se (uma tecla foi pressionada)
        //    Executar a função respectiva!
        //Uteis.wait(2000);
        system("pause");
    }
    return true;
}
void SGestao::EnviarPontoSituacao(const string& ficheiro)
{
    ofstream F(ficheiro);
    for (list<Pessoa*>::iterator IT = LP.begin(); IT != LP.end(); ++IT)
    {
        F << "X" << ";";
    }
    F.close();
}
void SGestao::LancarVirus()
{
    Virus* V = new Covid("sddsf");
    L_Virus.push_back(V);

    //    int pos = Uteis::Aleatorio(0, LP.size()-1);
    //    Pessoa *Pesq = Get_Aleatoriamente_Pessoa(pos);
     //   AfectarVirusPessoa(Pesq, V);
}
void SGestao::AfectarVirusPessoa(Virus* V, Pessoa* P)
{
    V->AfectarPessoa(P);
    //P->AfectarVirus(V);
    //P->LV.push_back(V);
}
void SGestao::Mostrar()
{
    cout << "NP : " << LP.size() << endl;
    cout << "NQ : " << LQ.size() << endl;
}
