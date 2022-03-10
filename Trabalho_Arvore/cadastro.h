/*
Nome: Catarina Oliveira Dowsley Fernandes
DRE: 118026011
Disciplina: Linguagens de Programação - EEL670
Professor: Miguel Elias
Período: 2021.2
Engenharia Eletrônica e de Computação - DEL - Escola Politécnica - UFRJ
*/

/*Inclusão das Bibliotecas Necessárias*/
#include <string>
#include <iostream>
#include <stdexcept>
#include "arvore.h"
#include "paciente.h"


using namespace std;

/*Declaração das classes*/
class Cadastro{
    friend ostream &operator<<(ostream &, Cadastro &);

    public:
        void InserePaciente(Paciente);
        Paciente &ExibePaciente(string);
    private:
        Arvore <Paciente> Arvore_Pacientes;
};

/*Classe que define o que acontece quando tenta-se inserir um paciente que já existe.*/
class sameNamePaciente : public exception {
	public:
		virtual const char * what () const throw (); 
};
/*Classe que define o que acontece quando não encontra-se o paciente em  busca.*/
class notFoundPaciente : public exception {
	public:
		virtual const char * what () const throw (); 
};
