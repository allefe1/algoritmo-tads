//Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o 
//valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter. 

#include <iostream>
using namespace std;

int main (){
    float dolares, cotacao, real;

    cout << "quantos dolares deseja converter? ";
    cin >> dolares;

    cout << "cotaçao do dolar hoje: ";
    cin >> cotacao;

    real = dolares*cotacao;
    cout << "o valor em reais é de: " << real;

    return 0;
}