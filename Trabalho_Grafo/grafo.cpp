#include "grafo.h"
void Grafo::insereEnlace (Aresta *a) {
    if (!v.size()) {
        v.push_back (a);
        cout << "Aresta (" << a->getPrimeiroVertice()->getRotulo() 
            << ", " << a->getSegundoVertice()->getRotulo() 
                << ") inserida no Grafo..." << endl;
    } else {
        if (a->getPrimeiroVertice() == v.at(v.size() - 1)->getSegundoVertice()) {
            v.push_back (a);
            cout << "Aresta (" << a->getPrimeiroVertice()->getRotulo() 
                << ", " << a->getSegundoVertice()->getRotulo() 
                    << ") inserida no Grafo..." << endl;
        } else
            cout << "Aresta (" << a->getPrimeiroVertice()->getRotulo() 
                << ", " << a->getSegundoVertice()->getRotulo() 
                    << ") NÃO pode ser inserida no Grafo..." << endl;
    }
}
void Grafo::imprimeGrafo () {
    cout << "Grafo: ";
    for (unsigned i = 0; i < v.size(); i++)
        cout << v.at(i)->getPrimeiroVertice ()->getRotulo () << " -- ";
    cout << v.at(v.size() - 1)->getSegundoVertice ()->getRotulo () << endl;
    cout << "Distância: " << calculaDistancia () << endl;
}
double Grafo::calculaDistancia () {
    double distancia = 0;
    for (unsigned i = 0; i < v.size(); i++)
        distancia += v.at(i)->getPeso ();
    return distancia;
}