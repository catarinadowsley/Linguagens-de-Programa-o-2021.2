#include <iostream>
#include <vector>
using namespace std;
#ifndef VERTICE_H
#define VERTICE_H
class Vertice {
    public:
        Vertice (string);
        string getRotulo ();
    private:
        string rotulo;
};
#endif
