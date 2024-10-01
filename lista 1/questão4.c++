//Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual 
//aplicado ao número.

#include <iostream>
using namespace std;

int main(){
    int Ninteiro;
    float percentual;
    
    cout << "digite um numero inteiro ";
    cin >> Ninteiro;

    cout << "digite um percentual que queira obter ";
    cin >> percentual;

    percentual = percentual*Ninteiro/100; //processamento de um calculo de porcentagem

    cout << "o valor do percentual é de: "<< percentual;
    return 0;
}