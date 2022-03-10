/*
Nome: Catarina Oliveira Dowsley Fernandes
DRE: 118026011
Disciplina: Linguagens de Programação - EEL670
Professor: Miguel Elias
Período: 2021.2
Engenharia Eletrônica e de Computação - DEL - Escola Politécnica - UFRJ
*/

#include "cadastro.h"
#include "paciente.h"
using namespace std;

/*Função Principal*/
int main(){

/*Declarações das Variáveis*/
   int escolhaMenu;
   Cadastro cadastro;
   string pacienteNome_novo;
   Paciente *paciente;
   int escolhaPaciente;
   string pacienteNome;
   string exame_solicitado;
   string plano_de_saude;


/*Menu Principal */
   while (escolhaMenu != 4)
   {
      cout << " ______________________________________ " << endl;
      cout << "|                                      |" << endl;
      cout << "|                 MENU                 |" << endl;
      cout << "|______________________________________|" << endl;
      cout << "|1. Inserir um novo paciente.          |" << endl;
      cout << "|2. Buscar um paciente.                |" << endl;
      cout << "|3. Exibir lista de pacientes.         |" << endl;
      cout << "|4. Sair.                              |" << endl;
      cout << "|______________________________________|" << endl;

      cout<<"Insira a opção desejada: ";
      cin >> escolhaMenu;
      switch (escolhaMenu)
      {

      case 1:
      /*Menu de inserção de pacientes*/
         
         cout << "________________________________" << endl;
         cout << "|Escolha o tipo de inserção    | " << endl;
         cout << "|de paciente:                  | " << endl;
         cout << "|______________________________|" << endl;
         cout << "|1. Paciente                   |" << endl;
         cout << "|2. Paciente + Plano de Saúde  | " << endl;
         cout << "|3. Paciente + Exame a realizar| " << endl;
         cout << "|______________________________|" << endl;
         
         cout<<"Insira a opção desejada: ";
         cin >> escolhaPaciente;
        
         switch (escolhaPaciente)
         {
         case 1:
            paciente = new Paciente;
            break;
         case 2:
            paciente = new pacientePlano;
            break;
         case 3:
            paciente = new pacienteExame;
            break;
     
         

         default:
            cout << "Operação Inválida. Escolha uma opção válida." << endl;
            cin.ignore();
         }

         cout << "Nome do paciente: " ;
         cin >> *paciente;

        if (escolhaPaciente == 3){
            cout << "Digite o exame a ser realizado: ";
            getline(cin,exame_solicitado);
            static_cast<pacienteExame *>(paciente)->setExame (exame_solicitado);
        }

        if (escolhaPaciente == 2){
            cout << "Digite o Plano de Saúde : " ;
            cin >> plano_de_saude;
            static_cast<pacientePlano *>(paciente)->setPlano (plano_de_saude);
        }

         try{
            cadastro.InserePaciente(*paciente);
         }
         catch(sameNamePaciente & except){
            cout << except.what() << endl;
         }

         break;
         
         
      case 2:
         cout << "Nome do paciente: ";
         cin.ignore();
         getline(cin, pacienteNome_novo);
         

         try{
            cout << cadastro.ExibePaciente(pacienteNome_novo) << endl;
         }
         catch(notFoundPaciente &except){
            cout << except.what() << endl;
         }
         break;

      case 3:
        cout << cadastro;
        break;

      case 4:
        break;

      default:
        cout << "Opção Inválida. Tente novamente." << endl;
        cin.ignore();
      }  
   }  

    return 0;
}
