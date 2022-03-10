/*Exercício Avaliado 3
Nome: Catarina Oliveira Dowsley Fernandes
DRE: 11802011
Disciplina: Linguagens de Programação - EEL670
Professor: Miguel Elias
Universidade Federal do Rio de Janeiro - 2021.2*/

/*Inclusão das bibliotecas e arquivos necessários*/
#include <iostream>
#include <string>

using namespace std;
/* Definição da struct*/
struct filme {
    string nomeDoFilme;
    string nomeDaProdutora;
    double notaDoFilme;
};


istream &operator>>(istream &, filme &);
ostream &operator<<(ostream &, const filme &);