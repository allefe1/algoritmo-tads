/*Leia a idade de uma pessoa e escreva se ela já tem idade para tirar carteira de habilitação (18 anos 
completos) ou não. Se não tiver idade, escreva também quantos anos faltam para que possa tirar a 
carteira*/

#include <iostream>
using namespace std;

int main (){
    int idade;
    cout << "digite sua idade: ";
    cin >> idade;

    if (idade >= 18){
        cout << "você já pode tirar carteira de habilitação: ";
    }else if (idade < 18){
        cout << "voce ainda nao pode tirar carteira de habilitaçao, faltam: " << 18-idade << " anos";
    }
    return 0;
}