//Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de 
//acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos 
//a vista ou parcelado em até 10 vezes sem juros.


#include <iostream>
using namespace std;

int main() {
    float compraTotal, valorPrestacao; //declaradas em float pois pode ser um numero decimal
    int parcelasDesejadas;

    cout << "qual o valor da sua compra no mercado?";
    cin >> compraTotal;

    cout << "em quantas vezes voce quer parcelar?";
    cin >> parcelasDesejadas;

    valorPrestacao = compraTotal/parcelasDesejadas;
    cout << "o valor da suas parcelas será de:" << valorPrestacao;

    return 0;
    }