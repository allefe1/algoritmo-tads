/*Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e 
mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada. */

#include <iostream>
using namespace std;

int main(){
    int numero, soma;
    char letra;

    cout << "digite um numero inteiro: \n";
    cin >> numero;

    cout << "digite uma letra 'a' para antecessores ou 's' para sucessores\n";
    cin >> letra;

    if (letra == 'a'){
        soma = (numero - 1) + (numero - 2) + (numero - 3) + (numero - 4) + (numero - 5) + (numero-6) + (numero - 7) + (numero - 8) + (numero - 9) + (numero - 10);
    }else if (letra == 's'){
        soma = (numero + 1) + (numero + 2) + (numero + 3) + (numero + 4) + (numero + 5) + (numero + 6) + (numero + 7) + (numero + 8) + (numero + 9) + (numero + 10);
    }

    cout << "a soma dos numeros foi: " << soma;

    return 0;

}