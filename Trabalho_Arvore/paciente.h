/*
Nome: Catarina Oliveira Dowsley Fernandes
DRE: 118026011
Disciplina: Linguagens de Programação - EEL670
Professor: Miguel Elias
Período: 2021.2
Engenharia Eletrônica e de Computação - DEL - Escola Politécnica - UFRJ
*/

#ifndef paciente_h
#define paciente_h
#include <string>

using namespace std;

/*Declaração classe Paciente*/
class Paciente {

    friend istream &operator >>(istream &, Paciente &);
    friend ostream &operator <<(ostream &, Paciente &);

    public:
        string informacoesPaciente;

        virtual string &getNomeDoPaciente();

        bool operator>(const Paciente &);
        bool operator<(const Paciente &); 
        bool operator==(const Paciente &); 

        Paciente(string);
        Paciente();
        Paciente(const Paciente &);
    
    private:
        string nome_do_paciente;
};


/*Pacientes Específicos - Classes derivadas específicas*/
/*Classe Paciente + Plano*/
class pacientePlano: public Paciente{
    public:
        pacientePlano();
        void setPlano (string);
    private:
        string plano_basico = "Sem Plano";
};
/*Classe Paciente + Exame*/
class pacienteExame: public Paciente {
    public:
        pacienteExame();
        void setExame(string);
    private:
        string exame_basico = "Nenhum Exame";    
};
#endif