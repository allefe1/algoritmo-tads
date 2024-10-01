/*Escreva uma função chamada Troca que troque os valores dos parâmetros
recebidos. Essa função não deve ter retorno.*/


#include <iostream>
using namespace std;


void troca(int& num1, int& num2){
    int aux = num1;
    num1 = num2;
    num2 = aux;
}

int main(){
    int A, B;

    cout << "digite o valor de A: ";
    cin >> A;
    cout << "digite o valor de B: ";
    cin >> B;

    cout << "antes A era: " << A << " e B era: " << B << endl;

    troca(A,B);

    cout << "agora A e: " << A << " e B e: " << B << endl;

    return 0;
}