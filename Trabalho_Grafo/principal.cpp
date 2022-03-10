#include <iostream>
#include <vector>
#include "vertice.h"
#include "aresta.h"
#include "grafo.h"
/* Programa do Laboratório 5: 
 Programa de definição de um grafo
 Autor: Miguel Campista */
using namespace std;
int main() {
    Vertice v1 ("A"), v2 ("B"), v3 ("C"), v4 ("D"), v5 ("E");
    Aresta a1 (&v1, &v2), a2 (&v2, &v3, 2.5), a3 (&v3, &v4, 1.5), aerr (&v5, &v3);
    Grafo grafo;
    grafo.insereEnlace(&a1);
    grafo.insereEnlace(&a2);
    grafo.insereEnlace(&a3);
    // Tenta inserir um enlace que não dá continuidade ao grafo
    grafo.insereEnlace(&aerr);
    // Imprime o grafo e o peso correspondente
    cout << endl;
    grafo.imprimeCaminho();
    return 0;
}
