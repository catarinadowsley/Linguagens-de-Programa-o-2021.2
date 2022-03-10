#include "aresta.h"
Aresta::Aresta (Vertice *prim, Vertice *seg, double p) {
    primeiroVertice = prim; segundoVertice = seg; peso = p;
}
Vertice *Aresta::getPrimeiroVertice () {
    return primeiroVertice;
}
Vertice *Aresta::getSegundoVertice () {
    return segundoVertice;
}
double Aresta::getPeso () {
    return peso;
}