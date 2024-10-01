/*Elabore um algoritmo que
- Crie a estrutura tAnimal: Registro tAnimal:
nome: string
raca: string
idade: int
- Declare um vetor Animais (50 posições de tAnimal) e cadastre 8 animais;
- Verifique e escreva o nome do animal mais velho;
- Pergunte ao usuário se deseja consultar os animais cadastrados solicitando uma raça para
a busca. Se ele quiser, leia uma raça e, se existir animal da raça procurada, informe seus
dados (nome e idade); */

#include <iostream>
using namespace std;

struct tAnimal{
    string nome;
    string nomeVelho;
    string raca;
    int idade;
};

int main(){
    int maiorIdade = 0;
    bool encontrado = false;
    char opcao;
    string racaA;
    int nomeVelho, int tamanho = 50;
    tAnimal animal[tamanho];
    
    for(int i = 0; i < 8; i++){
        
        cout << "\t CADASTRO DE ANIMAIS: " << endl;

        cout << "Digite o nome do animal [" << i+1 << "]: " << endl;
        getline(cin,animal[i].nome);

        cout << "Digite a raca do animal [" << i+1 << "]: " << endl;
        getline(cin,animal[i].raca);

        cout << "digite a idade do animal [" << i+1 << "]: " << endl;
        cin >> animal[i].idade;
        cin.ignore();
    }

    for(int i = 0; i < 8; i++ ){
        if(animal[i].idade > maiorIdade){
            maiorIdade = animal[i].idade;
            nomeVelho = i;
        }
    }

    cout << "o animal de maior idade e: " << animal[nomeVelho].nome << "tendo: [" << maiorIdade << "] anos" << endl;

    cout << "voce deseja buscar algum animal pela raca? [digite S para sim e N para nao]" << endl;
    cin >> opcao;
    cin.ignore();

    if(opcao == 's' || opcao == 'S'){
        cout << "digite a raca do animal desejado: " << endl;
        getline(cin,racaA);


        for(int i = 0; i < 8; i++){
            if(racaA == animal[i].raca){
                cout << "o nome do animal encontrado e: " << animal[i].nome << endl;
                cout << "a idade do animal encontrado e: " << animal[i].idade << endl;
                encontrado = true;
            }
        }
    }
    if(encontrado != true){
        cout << "nenhum animal dessa raca foi encontrado" << endl;
    }
    
   return 0; 
    
}