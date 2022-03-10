/*Exercício Avaliado 3
Nome: Catarina Oliveira Dowsley Fernandes
DRE: 11802011
Disciplina: Linguagens de Programação - EEL670
Professor: Miguel Elias
Universidade Federal do Rio de Janeiro - 2021.2*/


/*Inclusão das bibliotecas e arquivos necessários*/
#include <iostream>
#include <fstream>
#include <string>
#include "catalogo.h"

using namespace std;

/*Definição funcão main */

int main(){
  /* Iniciação das variáveis*/
   int escolha_menu;
   Catalogo catalogo;
    
   vector <filme> filmesEscolhidos;
   string filmeEscolhidoProdutora;
   filme filmeEscolhido;
   double filmeEscolhidoNota;
   string filmeEscolhidoNome;
   filme *ponteiroParaFilme;
   int quantidadeFilmes = 0;
   int escolherFilmeNovo = 1;
   int editarFilme = 0;

   while (escolha_menu != 7)
   { /* Menu */
      cout << "----------------------------------------" << endl;
      cout << "|                 MENU                  |" << endl;
      cout << "----------------------------------------" << endl;
      cout << "Instrução: Digite o número da opção desejada e de enter." << endl;
      cout << "1. Inserir novo filme no catálogo." << endl;
      cout << "2. Remover filme do catálogo. " << endl;
      cout << "3. Buscar filme no catálogo. " << endl;
      cout << "4. Editar informações sobre um filme. " << endl;
      cout << "5. Exibir todos os filmes do catálogo. " << endl;
      cout << "6. Exibir o filme com maior nota. " << endl;
      cout << "7. Sair " << endl;

      cin >> escolha_menu;
      switch (escolha_menu)
      {
      /*Definição de casos */
      case 1:
        while (escolherFilmeNovo == 1){
          cin.ignore();
          cout << "Digite o nome do filme, a produtora e nota que deseja inserir (entre os dados pule uma linha): " << endl;
          cin >> filmeEscolhido;
          filmesEscolhidos.push_back(filmeEscolhido);
          quantidadeFilmes++;

          cout << "Para adicionair mais um filme digite 1." << endl;
          cout << "Para voltar ao Menu digite 0. " << endl;
          cin >> escolherFilmeNovo;
        }

        if (quantidadeFilmes == 1){
            catalogo += filmeEscolhido;
          }
        else{
            catalogo += filmesEscolhidos;
        }
        break;

      case 2:
        cout << "Entre com o nome do filme que deseja remover:  " << endl;
        cin.ignore();
        getline (cin, filmeEscolhidoNome);

        ponteiroParaFilme = catalogo(filmeEscolhidoNome);
        catalogo -= *ponteiroParaFilme;
        cout<<"Filme removido"<<endl;
        break;
        

      case 3:
        cout << "Digite o nome do filme que deseja encontrar: " << endl;
        cin.ignore();
        getline(cin, filmeEscolhidoNome);

        ponteiroParaFilme = catalogo(filmeEscolhidoNome);

        if (ponteiroParaFilme != NULL) 
          cout << *ponteiroParaFilme;
        else 
          cout << "Filme não esta no catálogo. " << endl;
        break;

      case 4:
        cout << "Digite o nome do filme que deseja editar: ";
          cin.ignore();
          getline(cin, filmeEscolhidoNome);

          if (!catalogo(filmeEscolhidoNome)) {
              cout << "Filme não está no catálogo. " << endl;
              break;
          }


          while (editarFilme != 3){
            cout << "Escolha qual informação do filme você gostaria de editar? " << endl;
            cout << "1. Produtora. " << endl;
            cout << "2. Nota. " << endl;
            cout << "3. Voltar ao menu. " << endl;
            cin >> editarFilme;
          
            if (editarFilme == 1) {
                cout << "Digite a nova produtora: ";
                cin.ignore();
                getline(cin, filmeEscolhidoProdutora);
                catalogo(filmeEscolhidoNome,filmeEscolhidoProdutora);
            }

            if (editarFilme == 2) {
                cout << "Digite a nova nota: ";
                cin >> filmeEscolhidoNota;
                catalogo(filmeEscolhidoNome, filmeEscolhidoNota);
            }
          }
          break;

      case 5:
        cout << catalogo;
        break;

      case 6:
        catalogo.exibirFilmeMaiorNota();
        break;

      case 7: 
        break;

      default:
        cout << "Operação inválida, escolha uma operação existente." << endl;
      }  
   }  

    catalogo.RenovarCatalogo();
    return 0;
}