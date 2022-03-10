/*Exercício Avaliado 3
Nome: Catarina Oliveira Dowsley Fernandes
DRE: 11802011
Disciplina: Linguagens de Programação - EEL670
Professor: Miguel Elias
Universidade Federal do Rio de Janeiro - 2021.2*/



/*Inclusão das bibliotecas e arquivos necessários*/
#include <vector>
#include <iostream>
#include <fstream>
#include "filme.h"

/* Declaração das classes*/
class Catalogo {
    friend ostream &operator<<(ostream &, const Catalogo &);

    friend const Catalogo &operator-=(Catalogo &, const filme &);
    friend const Catalogo &operator+=(Catalogo &, const filme &);
    friend const Catalogo &operator+=(Catalogo &, const vector <filme> &);
    
    friend bool operator==(const filme &, const filme &);
    friend bool operator>(const filme &, const double &);
    friend bool operator>(const filme &, const filme &);
    
    public:
        Catalogo();

        void exibirFilmeMaiorNota();
        void RenovarCatalogo();

        filme *operator()(string);
        filme *operator()(string, string);
        filme *operator()(string, double);

    private:
        const static int tamanhoMaximo = 20;
        string fileNome;
        vector <filme> filmesConjunto;
};