/*Faça uma função que recebe um número inteiro por parâmetro e retorna
verdadeiro se ele for par e falso se for ímpar. */

#include <iostream>
using namespace std;

int parImpar (int num1){
    bool x = false;
    if(num1 % 2 == 0){
        x = true;
    }

    return x;
}

int main (){
    bool resultado;
    int numero;

    cout << "digite um numero: " << endl;
    cin >> numero;

    resultado = parImpar(numero);

    if (resultado == true){
        cout << "o numero: " << numero << " e par!" << endl;
    }else {
        cout << "o numero: " << numero << " e impar!" << endl;
    }

    return 0;
}