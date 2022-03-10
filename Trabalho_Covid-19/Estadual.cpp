/*** Arquivo estaudal.cpp***/
#include <iostream>
#include <string>
#include "Nacional.h"

using namespace std;

void Estadual::setNomeEstado (string siglaEstado_escolhido){
    siglaEstado = siglaEstado_escolhido;

}

string Estadual::getNomeEstado(){
    return siglaEstado;
}

void Estadual::setMortesDiarias(vector <int> mortesEstado)){
    mortesEstado_dias=mortesEstado;

}

vector <int> Estadual::getMortesDiarias(){
    return mortesEstado_dias;
}

float Estadual::getMediaMovel (int quantidadeDias){
    int soma_mortes=0;
    int media_movel=0;

    for (int indice = 0; indice<quantidadeDias;indices++)
    soma_mortes += mortesEstado_dias[indice];

    media_movel_dias = (soma_mortes/quantidadeDias);

    return media_movel_dias;

}

int Estadual::getNumeroDeObitos (){
    int soma_mortes_total = 0;

    for (unsigned int indice_obitos  =0; indice_obitos <mortesEstado_dias.size(); indice_obitos++)
        soma_mortes_total += mortesEstado_dias[indice_obitos];

        return soma_mortes_total;
}

int Estadual::getNumeroDeObitosDiasAtual(int quantidadeDias){
    int soma_mortes_total_atual=0;

    for(int indice_obitos=0; indice_obitos <quantidadeDias; indice_obitos++)
        soma_mortes_total_atual += mortesEstado_dias[indice_obitos];

    
    return soma_mortes_total_atual;

 }

int Estadual::getNumeroDeObitosDiasAnterior(int quantidadeDias){
    int soma_mortes_total_anterior=0;

    for(int indice_obitos=1; indice_obitos <quantidadeDias; indice_obitos++)
        soma_mortes_total_anterior += mortesEstado_dias[indice_obitos];

    
    return soma_mortes_total_anterior;

 }

int Estadual::getNumeroDeObitosquantidadeDias (int quantidadeDias){
    int soma_mortes_total = 0;

    for (int indice_obitos = 0; indice_obitos<quantidadeDias; indice_obitos++)
        soma_mortes_total+=mortesEstado_dias[indice_obitos];

        return soma_mortes_total;
}