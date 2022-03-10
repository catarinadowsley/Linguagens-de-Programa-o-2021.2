///*** Arquivo estadual.h ***///
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Estadual{

    public:
    
        void setNomeEstado(string);
        string getNomeEstado();

        void setMortesDiarias(vector<int>);
        vector <int> getMortesDiarias();

        float getMediaMovel(int);

        float getPorcentagemRisco(int);

        int getNumeroDeObitos();

        int getNumeroDeObitosDiasAnterior(int);

        int getNumeroDeObitosDiasAtual(int);

        int getNumeroDeObitosquantidadeDias(int);

    private:

        string siglaEstado;
        vector <int> mortesEstado_dias;
};

