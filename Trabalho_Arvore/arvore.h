/*
Nome: Catarina Oliveira Dowsley Fernandes
DRE: 118026011
Disciplina: Linguagens de Programação - EEL670
Professor: Miguel Elias
Período: 2021.2
Engenharia Eletrônica e de Computação - DEL - Escola Politécnica - UFRJ
*/

/*Inclusão das Bibliotecas e Arquivos  Necessários*/
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include "paciente.h"

/*Declaração da classes da arvore*/
/*Classe nó */
template <class  T>
class No{
    public:
        T dado;
        No *left=nullptr;
        No *right=nullptr;
};

/*Classe árvore*/
template <class T>
class Arvore{

    template <class unused>
    friend ostream &operator<<(ostream & saida, Arvore<T> & arvore);

    public:
        ~Arvore();
        T *operator+=(const T &newNoArvore);
        T *operator()(const string & pacienteNome); 
        No<T> *InicioArvore = nullptr;

    private:                                   
        No<T> *Insere(No<T> *inicio, const T &newNoArvore);       
        template <class type_data>
        No<T> *Procura(No<T> *inicio, const type_data &pacienteNome);

};



template <class T>
Arvore<T>::~Arvore(){

    stack<No<T>*> stack;
    No<T>* curr = InicioArvore;

    while (!stack.empty() || curr != nullptr)
    {
        if (curr != nullptr)
        {
            stack.push(curr);
            curr = curr->right;
        }
        else {
            curr = stack.top();
            stack.pop();
            curr = curr->left;
            delete curr;
        }
    }
       
}

template <class T>
T *Arvore<T>::operator+=(const T & newNoArvore){

    if (InicioArvore == NULL){
        InicioArvore = new No<T>;
        InicioArvore->dado = newNoArvore;

        return &InicioArvore->dado;
    }
    else
        return &(Insere(InicioArvore, newNoArvore)->dado);
}

template <class T>
ostream &operator<<(ostream & saida, Arvore<T> & arvore){
   
    stack<No<T>*> stack;
 
    No<T>* curr = arvore.InicioArvore;
 
    while (!stack.empty() || curr != nullptr)
    {

        if (curr != nullptr)
        {
            stack.push(curr);
            curr = curr->right;
        }
        else {
            curr = stack.top();
            stack.pop();
            cout << curr->dado << endl;
 
            curr = curr->left;
        }
    }
    
    return saida;
}

template <class T>
T *Arvore<T>::operator()(const string & pacienteNome){
    return &(Procura(InicioArvore, pacienteNome)->dado);
}

template <class T>
template <class type_data>

/*Encontrando um nó de maneira recursiva*/
No<T> *Arvore<T>::Procura(No<T> *inicio, const type_data &valor){
    if (inicio == NULL)
        return NULL;
    else if (inicio->dado == valor)
        return inicio;
    else if (inicio->dado < valor)
        return Procura(inicio->left, valor);
    else
        return Procura(inicio->right, valor);
}

/*Inserindo nós na árvore*/
template <class T>
No<T> *Arvore<T>::Insere(No<T> *inicio, const T & newNoArvore){
  
    if (inicio->dado==newNoArvore){
        return nullptr;
    }
    if (inicio->dado > newNoArvore){

        if (inicio->right == NULL){
            inicio->right = new No<T>;
            inicio->right->dado = newNoArvore;

            return inicio->right;
        }
        else
            return Insere(inicio->right, newNoArvore);
    }
    else{
        if (inicio->left == NULL){
            inicio->left = new No<T>;
            inicio->left->dado = newNoArvore;

            return inicio->left;
        }
        else
            return Insere(inicio->left, newNoArvore);
    }
}