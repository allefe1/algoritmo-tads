/*Altere o exercício anterior para que, após o término de todos os cadastros, ou seja, quando
o usuário digitar "N" na pergunta para novo cliente ou quando preencher o vetor com 20
clientes, a tela seja ser limpa e seja exibida uma nova tela perguntando se o usuário quer ver
um relatório ou consultar um cliente individualmente. Se ele desejar ver o relatório, o
sistema deverá exibi-lo conforme questão anterior. Se ele escolher consultar um cliente
individualmente, o sistema deverá solicitar a identidade do cliente procurado, fazer uma
busca no vetor e informar seus dados caso o cliente esteja cadastrado. Se não existir cliente
cadastrado com aquela identidade, o sistema deverá informar “Cliente não cadastrado”. */

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
    float busca;
    bool encontrado = false;
    int cont = 0;
    char opcao;
    int opcao2;
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

        if(cont>=tamanho){
            cout << "limite de clientes atingidos! " <<endl;
            break;
        }

    }while(opcao == 's' || opcao == 'S');

    system("cls");
    do{
        cout << "\n\t MENU DA LOJA:" << endl;
        cout << "\n\t 1: Relatorio dos clientes:" << endl;
        cout << "\n\t 2: Consultar cliente individualmente:" << endl;
        cout << "\n\t 3: SAIR" << endl;

        cin >> opcao2;

        if(opcao2 == 1){
            cout << "esses sao os clientes cadastrados na loja: " << endl;
            for (int i = 0; i < cont; i++){
                cout << "\tnome: " << vetor[i].nome << endl;
                cout << "\tidentidade: " << vetor[i].identidade << endl;
                cout << "\tendereco: " << vetor[i].endereco << endl;
                cout << "\ttelefone: " << vetor[i].telefone << endl;
                cout << "-----------------------------------" << endl;
            }
        }

        if(opcao2 == 2){
            cout << "qual o numero da identidade do cliente: " << endl;
            cin >> busca;
            for(int i = 0; i < cont; i++){
                if(vetor[i].identidade == busca){

                    cout << "\tnome: " << vetor[i].nome << endl;
                    cout << "\tidentidade: " << vetor[i].identidade << endl;
                    cout << "\tendereco: " << vetor[i].endereco << endl;
                    cout << "\ttelefone: " << vetor[i].telefone << endl;
                    cout << "-----------------------------------" << endl;
                    
                    encontrado =  true;
                    break;
                }
            }

            if(!encontrado){
                cout << "cliente nao encontrado na base de dados! " << endl;
            }
        }
    }while(opcao2 != 3);

    cout << "voce saiu do sistema! " ;

    return 0;
}