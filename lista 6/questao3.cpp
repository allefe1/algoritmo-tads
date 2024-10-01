/*Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias
para o cliente são: identidade, nome, endereço e telefone. OBS: Deve ser usada uma
estrutura de registro para a construção deste cadastro. */

#include <iostream>
using namespace std;

struct cliente{
    float identidade;
    string nome;
    string endereco;
    int telefone;
};

int main (){
    int tamanho = 20;
    cliente vetor[tamanho];

    cout << "\n\tcadastro de clientes da loja: " << endl;
    for(int i = 0; i < tamanho; i++){

        cout << "digite a identidade do cliente: " << i+1 << endl;
        cin >> vetor[i].identidade;

        cin.ignore();

        cout << "digite o nome do cliente: " << i+1 << endl;
        getline(cin,vetor[i].nome);

        cout << "digite o endereco do cliente: " << i+1 << endl;
        getline(cin,vetor[i].endereco);

        cout << "digite o telefone do cliente: " << i+1 << endl;
        cin >> vetor[i].telefone;
    }

    cout << "esses sao os clientes cadastrados na loja: " << endl;
    for (int i = 0; i < tamanho; i++){
        cout << "\tnome: " << vetor[i].nome << endl;
        cout << "\tidentidade: " << vetor[i].identidade << endl;
        cout << "\tendereco: " << vetor[i].endereco << endl;
        cout << "\ttelefone: " << vetor[i].telefone << endl;
        cout << "-----------------------------------" << endl;
    }

    return 0;
}