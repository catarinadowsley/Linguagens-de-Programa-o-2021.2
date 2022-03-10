#include <iostream>
#include <vector>
#include "aresta.h"
using namespace std;
#ifndef CAMINHO_H
#define CAMINHO_H
class Grafo {
    public:
        void insereEnlace (Aresta *);
        void imprimeCaminho ();
        double calculaDistancia ();
    private:
        vector <Aresta *> v;
};
#endif
