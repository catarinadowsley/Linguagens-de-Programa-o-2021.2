/*
Nome: Catarina Oliveira Dowsley Fernandes
DRE: 118026011
Disciplina: Linguagens de Programação - EEL670
Professor: Miguel Elias
Período: 2021.2
Engenharia Eletrônica e de Computação - DEL - Escola Politécnica - UFRJ
*/

/*Inclusão das Bibliotecas Necessárias*/
#include <exception>
#include "cadastro.h"


const char * notFoundPaciente::what () const throw () {
	return "Paciente não consta no cadastro.";
} 

const char * sameNamePaciente::what () const throw () {
	return "Paciente já consta no cadastro.";
} 

/*Retorna na saída a lista com tosos os pacientes cadastrados*/
ostream &operator<<(ostream & saida, Cadastro & cadastro){
    saida << cadastro.Arvore_Pacientes;

    return saida;
}

/*Retorna paciente buscado*/
Paciente &Cadastro::ExibePaciente(string pacienteNome){
    Paciente *arvorePaciente = Arvore_Pacientes(pacienteNome);

    if (arvorePaciente == NULL)
        throw notFoundPaciente(); 

    return *arvorePaciente;
}

/*Inserir o Paciente na árvore*/
void Cadastro::InserePaciente(Paciente paciente){

    if ((Arvore_Pacientes += paciente)==NULL)
        throw sameNamePaciente();
}