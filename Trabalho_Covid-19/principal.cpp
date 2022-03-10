///***Programa Principal***///

#include <iostream>
#include <string>

#include "Nacional.h"



using namespace std;

int main(){
   Estadual estado;
   string siglaEstado;
   Nacional Brasil;
   unsigned int quantidadeDias = 3;
   int opcao_menu;

   

   
   // ACRE
   vector <int> AC = {20, 10, 50, 60, 80, 170, 90, 35, 340, 77};
  

   estado.setNomeEstado ("Acre");
   estado.setMortesDiarias (AC);

   Brasil.insereEstado(estado);
   

   // ALAGOAS
   vector <int> AL = {37, 150, 36, 45, 70, 170, 200, 220, 340, 150};
  

   estado.setNomeEstado ("Alagoas");
   estado.setMortesDiarias (AL);

   Brasil.insereEstado(estado);

   // AMAPÁ
   vector <int> AP = {20, 90, 30, 10, 8, 5, 3, 4, 7, 12};
  

   estado.setNomeEstado ("Amapá");
   estado.setMortesDiarias (AP);

   Brasil.insereEstado(estado);

   // AMAZONAS
   vector <int> AM = {20, 10, 50, 35, 80, 170, 90, 140, 340, 77};
  

   estado.setNomeEstado ("Amazonas");
   estado.setMortesDiarias (AM);

   Brasil.insereEstado(estado);

   // bahia
   vector <int> BA = {20, 10, 50, 60, 0, 35, 90, 35, 20, 0};
  

   estado.setNomeEstado ("Bahia");
   estado.setMortesDiarias (BA);

   Brasil.insereEstado(estado);

   // ceará
   vector <int> CE = {20, 15, 50, 77, 80, 170, 90, 35, 50, 14};
  

   estado.setNomeEstado ("Ceará");
   estado.setMortesDiarias (CE);

   Brasil.insereEstado(estado);

   // distrito federal
   vector <int> DF = {20, 10, 50, 56, 125, 175, 500, 356, 600, 770};
  

   estado.setNomeEstado ("Distrito Federal");
   estado.setMortesDiarias (DF);

   Brasil.insereEstado(estado);

   // ESPÍRITO SANTO
   vector <int> ES = {20, 10, 50, 60, 80, 170, 350, 700, 500, 100};
  

   estado.setNomeEstado ("Espirito Santo");
   estado.setMortesDiarias (ES);

   Brasil.insereEstado(estado);

   // GOIÁS
   vector <int> GO = {20, 40, 80, 160, 320, 170, 90, 35, 340, 77};
  

   estado.setNomeEstado ("Goiás");
   estado.setMortesDiarias (GO);

   Brasil.insereEstado(estado);


   // MARANHÃO
   vector <int> MA = {20, 10, 50, 60, 80, 85, 90, 95, 100, 105};
  

   estado.setNomeEstado ("Maranhão");
   estado.setMortesDiarias (MA);

   Brasil.insereEstado(estado);

   //MATO GROSSO
   vector <int> MT = {20, 10, 50, 60, 75, 70, 65, 60, 55, 50};
  

   estado.setNomeEstado ("Mato Grosso");
   estado.setMortesDiarias (MT);

   Brasil.insereEstado(estado);

   // Mato Grosso do Sul
   vector <int> MS = {20, 10, 50, 600, 80, 500, 400, 360, 340, 250};
  

   estado.setNomeEstado ("Mato Grosso do Sul");
   estado.setMortesDiarias (MS);

   Brasil.insereEstado(estado);


   // MINAS GERAIS
   vector <int> MG = {20, 550, 300, 350, 200, 170, 120, 100, 90, 77};
  

   estado.setNomeEstado ("Minas Gerais");
   estado.setMortesDiarias (MG);

   Brasil.insereEstado(estado);


   // PARÁ
   vector <int> PA = {20, 80, 50, 70, 80, 170, 50, 39, 90, 77};
  

   estado.setNomeEstado ("Pará");
   estado.setMortesDiarias (PA);

   Brasil.insereEstado(estado);

   // PARANÁ
   vector <int> PR = {100, 150, 50, 60, 550, 170, 90, 35, 340, 350};
  

   estado.setNomeEstado ("Paraná");
   estado.setMortesDiarias (PR);

   Brasil.insereEstado(estado);

   // PARAÍBA
   vector <int> PB = {20, 200, 50, 60, 80, 200, 90, 220, 340, 77};
  

   estado.setNomeEstado ("Paraíba");
   estado.setMortesDiarias (PB);

   Brasil.insereEstado(estado);

   // pernambuco
   vector <int> PE = {20, 10, 50, 54, 80, 24, 90, 35, 35, 35};
  

   estado.setNomeEstado ("Pernanbuco");
   estado.setMortesDiarias (PE);

   Brasil.insereEstado(estado);

   // PIAUÍ
   vector <int> PI = {20, 24, 50, 60, 80, 54, 90, 35, 340, 52};
  

   estado.setNomeEstado ("Piauí");
   estado.setMortesDiarias (PI);

   Brasil.insereEstado(estado);

   // RIO DE JANEIRO
   vector <int> RJ = {47, 10, 50, 60, 80, 75, 90, 35, 58, 77};
  

   estado.setNomeEstado ("Rio de Janeiro");
   estado.setMortesDiarias (RJ);

   Brasil.insereEstado(estado);

   // RIO GRANDE DO NORTE
   vector <int> RN = {20, 10, 50, 60, 41, 170, 90, 35, 36, 77};
  

   estado.setNomeEstado ("Rio Grande do Norte");
   estado.setMortesDiarias (RN);

   Brasil.insereEstado(estado);

   // RIO GRANDE DO SUL
   vector <int> RS = {20, 100, 400, 60, 80, 330, 222, 500, 340, 77};
  

   estado.setNomeEstado ("Rio Grande do Sul");
   estado.setMortesDiarias (RS);

   Brasil.insereEstado(estado);


   // RONDÔNIA
   vector <int> RO = {20, 45, 45, 60, 80, 170, 90, 35, 54, 77};
  

   estado.setNomeEstado ("Rondônia");
   estado.setMortesDiarias (RO);

   Brasil.insereEstado(estado);

   // RORAIMA
   vector <int> RR = {20, 10, 50, 60, 40, 14, 90, 35, 25, 33};
  

   estado.setNomeEstado ("Roraima");
   estado.setMortesDiarias (RR);

   Brasil.insereEstado(estado);

   // SANTA CATARINA
   vector <int> SC = {20, 10, 0, 0, 0, 0, 3, 5, 11, 15};
  

   estado.setNomeEstado ("Santa Catarina");
   estado.setMortesDiarias (SC);

   Brasil.insereEstado(estado);

   // SÃO PAULO
   vector <int> SP = {20, 1, 5, 6, 0, 17, 9, 3, 34, 7};
  

   estado.setNomeEstado ("São Paulo");
   estado.setMortesDiarias (SP);

   Brasil.insereEstado(estado);

   // SERGIPE

   vector <int> SE = {20, 10, 5, 60, 80, 14, 90, 35, 34, 7};
  

   estado.setNomeEstado ("Sergipe");
   estado.setMortesDiarias (SE);

   Brasil.insereEstado(estado);

   // TOCANTINS
   vector <int> TO = {20, 10, 8, 60, 80, 14, 90, 5, 3, 7};
  

   estado.setNomeEstado ("Tocantins");
   estado.setMortesDiarias (TO);

   Brasil.insereEstado(estado);



   

   cout << "----------------- MENU -----------------" << endl;
   cout << "1. Mostrar media movel dos estados " << endl;
   cout << "2. Mostrar media movel no Brasil " << endl;
   cout << "3. Mostrar a estabilidade dos estados" << endl;
   cout << "4. Mostrar a estabilidade do Brasil " << endl;
   cout << "5. Mostrar estados com maior alta e maior baixa " << endl;
   cout << "6. Mostrar numero de obitos em cada estado " << endl;
   cout << "7. Mostrar numero de obitos no Brasil" << endl;
   cout << "8. Sair " << endl;

   

   while (opcao_menu != 8)
   {

      cin >> opcao_menu;

      switch (opcao_menu)
      {
      
      case 1:
         Brasil.mostraMediaMovelEstados(quantidadeDias); 
         break;

      case 2:
         Brasil.mostraMediaMovelBrasil (quantidadeDias);
         break;

      case 3:
         Brasil.mostraNumeroDeObitosEstados();
         break;

      case 4:
         Brasil.mostraNumeroDeObitosBrasil ();
         break;

      case 5:
         Brasil.mostraEstabilidadeEstados(quantidadeDias);
         break;

      case 6:
         Brasil.mostraEstabilidadeBrasil(quantidadeDias);
         break;

      case 7:
         Brasil.mostraMaiorPorcentagemRisco (quantidadeDias);
         Brasil.mostraMenorPorcentagemRisco (quantidadeDias);
         break;

      case 8:
         break;

      default:
         cout << "Operacao invalida, escolha uma operacao existente" << endl;
      }
   }  
}
