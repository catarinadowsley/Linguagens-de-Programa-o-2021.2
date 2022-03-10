/*
Nome: Catarina Oliveira Dowsley Fernandes
DRE: 118026011
Disciplina: Linguagens de Programação - EEL670
Professor: Miguel Elias
Período: 2021.2
Engenharia Eletrônica e de Computação - DEL - Escola Politécnica - UFRJ
*/

/*Inclusão das Bibliotecas e Arquivos Necessários*/
#include <string>
#include <iostream>
#include "paciente.h"

using namespace std;

/*Definição das funções */

/*Fução de inserção de paciente + plano de saúde*/
void pacientePlano::setPlano (string plano_paciente){
        plano_basico = plano_paciente;
        informacoesPaciente = "Plano de Saúde: " + plano_basico ;
}
/*Função de inserção de paciente + exame*/
void pacienteExame::setExame (string exame_paciente){
        exame_basico = exame_paciente;
        informacoesPaciente = "Exame a ser realizado: " + exame_basico;
}
istream &operator >>(istream & entrada,Paciente & paciente){

    cin.ignore();
    getline(entrada,paciente.nome_do_paciente);
    
    return entrada;
}
ostream &operator <<(ostream & saida, Paciente & paciente){
    saida << "Nome -> " << paciente.getNomeDoPaciente() << endl;
    saida << "Informações -> "<< paciente.informacoesPaciente << endl;
    saida << endl;

    return saida;
}
bool Paciente::operator>(const Paciente & paciente){
    return this->nome_do_paciente > paciente.nome_do_paciente;
}
bool Paciente::operator<(const Paciente & paciente){
    return this->nome_do_paciente < paciente.nome_do_paciente;
}
bool Paciente::operator==(const Paciente & paciente){
    return this->nome_do_paciente == paciente.nome_do_paciente;
}
Paciente::Paciente(string pacienteNome){
    nome_do_paciente = pacienteNome;
}
string &Paciente::getNomeDoPaciente(){
    return nome_do_paciente;
}
Paciente::Paciente(const Paciente & paciente){
    this->nome_do_paciente = paciente.nome_do_paciente;
    this->informacoesPaciente = paciente.informacoesPaciente;
}
Paciente::Paciente(){
    informacoesPaciente = "Sem informacoes sobre o paciente.";
}
pacienteExame::pacienteExame(){
    informacoesPaciente = "Exame a ser realizado: " + exame_basico;
}
pacientePlano::pacientePlano(){
    informacoesPaciente = "Plano de Saúde: " + plano_basico;
}