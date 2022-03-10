/*Exercício Avaliado 3
Nome: Catarina Oliveira Dowsley Fernandes
DRE: 11802011
Disciplina: Linguagens de Programação - EEL670
Professor: Miguel Elias
Universidade Federal do Rio de Janeiro - 2021.2*/

/*Inclusão das bibliotecas e arquivos necessários*/
#include "catalogo.h"


ostream &operator<<(ostream &saida, const Catalogo &catalogo){
    for (unsigned int indice_filmes = 0; indice_filmes < catalogo.filmesConjunto.size(); indice_filmes++)
        saida << catalogo.filmesConjunto.at(indice_filmes);
    
    return saida;
}

bool operator>(const filme &primfilme, const filme &segfilme){
    if (primfilme.nomeDoFilme > segfilme.nomeDoFilme) 
        return true;

    return false;
}

bool operator==(const filme &primfilme, const filme &segfilme){
    if (primfilme.nomeDoFilme == segfilme.nomeDoFilme) 
        return true;

    return false;
}

bool operator>(const filme &item_filme, const double &notaDoFilme){
    if (item_filme.notaDoFilme > notaDoFilme) 
        return true;

    return false;
}

/* Definição função que exibe o filme mais bem avaliado*/
void Catalogo::exibirFilmeMaiorNota(){
    double notaDofilmeBemAvaliado = 0;
    /* Laço de repetição para pegar a nota de cada filme. Faz uma comparação,
     se a nota for maior ela se torna a maior nota e entra na variável */
    for (unsigned int indice_filmesConjunto = 0; indice_filmesConjunto < filmesConjunto.size(); indice_filmesConjunto++){
        if (filmesConjunto.at(indice_filmesConjunto) > notaDofilmeBemAvaliado) 
            notaDofilmeBemAvaliado = filmesConjunto.at(indice_filmesConjunto).notaDoFilme;
    }
    /*Saída com o nome, produtora e nota do filme com maior nota */
    cout << "O filme com maior nota é: " << endl;
    for (unsigned int indice_filmesConjunto = 0; indice_filmesConjunto < filmesConjunto.size(); indice_filmesConjunto++){
        if (filmesConjunto.at(indice_filmesConjunto).notaDoFilme == notaDofilmeBemAvaliado)
        {
            cout << filmesConjunto.at(indice_filmesConjunto).nomeDoFilme << endl;
            cout << filmesConjunto.at(indice_filmesConjunto).nomeDaProdutora << endl;
            cout << filmesConjunto.at(indice_filmesConjunto).notaDoFilme << endl;
            cout << endl;
        }
    }
}

/* Definição da função que atualiza o arquivo que contém o catálogo.*/
void Catalogo::RenovarCatalogo(){
    fstream file;
    string fileNome = "filmes.txt";
    file.open(fileNome, fstream::out);

    /* Se o arquivo não existe. */
    if (!file.is_open()){
        cout << "Arquivo nao existe." << endl;
        exit (0);
    }

    /* Coloca o novo filme no catálogo.*/ 
    for (unsigned int indice_filmesConjunto = 0; indice_filmesConjunto < filmesConjunto.size(); indice_filmesConjunto++){
        file << filmesConjunto.at(indice_filmesConjunto).nomeDoFilme << ',';
        file << filmesConjunto.at(indice_filmesConjunto).nomeDaProdutora << ',';
        file  << filmesConjunto.at(indice_filmesConjunto).notaDoFilme<< endl;
    }

    file.close();
}

/*Definição da função que abre o arquivo e recebe os filmes e seus dados. */
Catalogo::Catalogo(){
    string fileNome = "filmes.txt";
    filme filmeAuxiliar;
    string notaAuxiliar;
    vector <filme> filmesAuxiliar;

    fstream file;
    file.open (fileNome, fstream::in);

    if (!file.is_open()){
        cout << "Arquivo nao existe. " << endl;
        exit(0);
    }

    
    while (!file.eof()){

        getline (file, filmeAuxiliar.nomeDoFilme, ',');
        getline (file, filmeAuxiliar.nomeDaProdutora, ',');
        getline (file, notaAuxiliar);
        filmeAuxiliar.notaDoFilme = stod (notaAuxiliar);

        if (!file.eof()){
                filmesAuxiliar.push_back (filmeAuxiliar);
        }
    }
    
    file.close();
    
    filmesConjunto = filmesAuxiliar;

}
/*Definição da busca e edição do filme */
filme *Catalogo::operator()(string filmeEscolhidoNome, string filmeEscolhidoProdutora){

    if (filmesConjunto.size() == 0) 
        return NULL;

    for (unsigned int indicefilmesConjunto = 0; indicefilmesConjunto < filmesConjunto.size(); indicefilmesConjunto++) {

        if (filmesConjunto.at(indicefilmesConjunto).nomeDoFilme == filmeEscolhidoNome) {
            filmesConjunto.at(indicefilmesConjunto).nomeDaProdutora = filmeEscolhidoProdutora;
            return &filmesConjunto.at(indicefilmesConjunto);
        }
    }
    return NULL; 
}

filme *Catalogo::operator()(string filmeEscolhidoNome, double filmeEscolhidoNota){

    if (filmesConjunto.size() == 0) 
        return NULL;

    for (unsigned int indicefilmesConjunto = 0; indicefilmesConjunto < filmesConjunto.size(); indicefilmesConjunto++) {

        if (filmesConjunto.at(indicefilmesConjunto).nomeDoFilme == filmeEscolhidoNome) {
            filmesConjunto.at(indicefilmesConjunto).notaDoFilme= filmeEscolhidoNota;
            return &filmesConjunto.at(indicefilmesConjunto);
        }
    }
    return NULL;
}

filme *Catalogo::operator()(string filmeEscolhidoNome){
    if (filmesConjunto.size() == 0) {
        cout << "Catálogo vazio. " << endl;
        return NULL;
    }

    for (unsigned int indicefilmesConjunto = 0; indicefilmesConjunto < filmesConjunto.size(); indicefilmesConjunto++) {
        if (filmesConjunto.at(indicefilmesConjunto).nomeDoFilme == filmeEscolhidoNome) 
            return &filmesConjunto.at(indicefilmesConjunto);
    }
    return NULL;
}

const Catalogo &operator-=(Catalogo &catalogo, const filme &filmeEscolhido){

    int indiceFilmeEscolhido;

    for (unsigned int indicefilmesConjunto = 0; indicefilmesConjunto < catalogo.filmesConjunto.size(); indicefilmesConjunto++){
        if (catalogo.filmesConjunto.at(indicefilmesConjunto) == filmeEscolhido)
            indiceFilmeEscolhido = indicefilmesConjunto;
    }

    catalogo.filmesConjunto.erase(catalogo.filmesConjunto.begin()+indiceFilmeEscolhido); //apaga o filme escolhido utilizando o metodo erase

    return catalogo;
}

/*Adicionando novo filme ao catálogo*/ 

const Catalogo &operator+=(Catalogo &catalogo, const filme &filmeEscolhido){

    if (catalogo.filmesConjunto.size() == 0) 
        catalogo.filmesConjunto.push_back(filmeEscolhido);

    
    int filmeRepetido = 0;
    /*Caso o filme já exista no catálogo*/
    for (unsigned int indicefilmesConjunto= 0; indicefilmesConjunto < catalogo.filmesConjunto.size(); indicefilmesConjunto++){
        if (catalogo.filmesConjunto.at(indicefilmesConjunto) == filmeEscolhido) 
            filmeRepetido = 1; 
    }

        
    if (filmeRepetido == 0) {
        for (unsigned int indicefilmesConjunto = 0; indicefilmesConjunto < catalogo.filmesConjunto.size(); indicefilmesConjunto++){
            
            if (catalogo.filmesConjunto.at(indicefilmesConjunto) > filmeEscolhido and indicefilmesConjunto == 0) {
                catalogo.filmesConjunto.insert(catalogo.filmesConjunto.begin(), filmeEscolhido);
                break;
            }

            else if (catalogo.filmesConjunto.at(indicefilmesConjunto) > filmeEscolhido) {
                catalogo.filmesConjunto.insert(catalogo.filmesConjunto.begin()+indicefilmesConjunto, filmeEscolhido);
                break;
            }

            else if (indicefilmesConjunto == catalogo.filmesConjunto.size() - 1) {
                catalogo.filmesConjunto.push_back(filmeEscolhido);
                break;
            }
        }
    }
    else if (filmeRepetido == 1)
        cout << "Este filme ja existe no catálogo. Tente de novo." << endl;
    
    return catalogo;
}

const Catalogo &operator+=(Catalogo &catalogo, const vector <filme> &vectorFilmes){

    if (catalogo.filmesConjunto.size() == 0) 
        catalogo.filmesConjunto.insert(catalogo.filmesConjunto.end(),vectorFilmes.begin(),vectorFilmes.end());

    else if (catalogo.filmesConjunto.size() + 1 > catalogo.tamanhoMaximo) 
        cout << "Limite para o numero de filmes atingido." << endl;

    else {
        for (unsigned int indicevectorFilmes = 0; indicevectorFilmes < vectorFilmes.size(); indicevectorFilmes++){

            int filmeRepetido = 0;

            for (unsigned int indicefilmesConjunto = 0; indicefilmesConjunto < catalogo.filmesConjunto.size(); indicefilmesConjunto++){
                if (catalogo.filmesConjunto.at(indicefilmesConjunto) == vectorFilmes.at(indicevectorFilmes)) 
                    filmeRepetido = 1;
            }

            if (filmeRepetido == 0) 
                catalogo += vectorFilmes.at(indicevectorFilmes);
            else{
                cout << "Este filme ja existe no catálogo. Tente de novo. " << endl;
                break;
            }
        }
    }
    return catalogo;
}