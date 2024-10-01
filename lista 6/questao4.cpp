/*Altere o exercício anterior para cadastrar no máximo 20 clientes. Ao final do cadastro de cada
cliente deverá ser perguntado: "Novo Cliente (S/N)?". Caso o usuário escolha “N” ou chegar
nos 20 clientes, o programa deve mostrar um relatório de todos os clientes cadastrados e
finalizar. OBS: Deve-se utilizar um vetor de registros na solução.*/

#include <iostream>
using namespace std;

struct cliente{
    float identidade;
    string nome;
    string endereco;
    int telefone;
};

int main (){
    const int tamanho = 20;
    int cont = 0;
    char opcao;
    cliente vetor[tamanho];

    cout << "\n\tcadastro de clientes da loja: " << endl;
    do{
        cout << "digite a identidade do cliente: " << cont+1 << endl;
        cin >> vetor[cont].identidade;

        cin.ignore();

        cout << "digite o nome do cliente: " << cont+1 << endl;
        getline(cin,vetor[cont].nome);

        cout << "digite o endereco do cliente: " << cont+1 << endl;
        getline(cin,vetor[cont].endereco);

        cout << "digite o telefone do cliente: " << cont+1 << endl;
        cin >> vetor[cont].telefone;

        cont++;

        cout << "deseja cadastrar novo cliente? (S para sim e N para nao): " << endl;
        cin >> opcao;

        if(cont>tamanho){
            cout << "limite de clientes atingidos! " <<endl;
            break;
        }

    }while(opcao == 's' || opcao == 'S');

    cout << "esses sao os clientes cadastrados na loja: " << endl;
    for (int i = 0; i < cont; i++){
        cout << "\tnome: " << vetor[i].nome << endl;
        cout << "\tidentidade: " << vetor[i].identidade << endl;
        cout << "\tendereco: " << vetor[i].endereco << endl;
        cout << "\ttelefone: " << vetor[i].telefone << endl;
        cout << "-----------------------------------" << endl;
    }

    return 0;
}