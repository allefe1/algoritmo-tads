/*Elabore um algoritmo que leia o código (inteiro) e a idade de 100 pessoas e escreva ao final o código da
pessoa mais velha e a idade da pessoa mais nova. */

#include <iostream>
using namespace std;

int main(){
    int idade, codigo;
    int idadeVElha = 0, idadeNova = 999;
    int codigoVelho, codigoNovo;

    for(int i = 1; i <= 100; ++i) {

        cout << "digite o codigo da pessoa " << i << ": ";
        cin >> codigo;

        cout << "digite a idade da pessoa " << i << ": ";
        cin >> idade;

        if(idade > idadeVElha) {
            idadeVElha = idade;
            codigoVelho = codigo;
        } if (idade < idadeNova){
            idadeNova = idade;
            codigoNovo = codigo;
        }
    }

    cout << "o codigo da pessoa mais velha é: \n" << codigoVelho;
    cout << "a idade da pessoa mais nova é: " << idadeNova;

    return 0;
}