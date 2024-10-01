/*Elaborar o algoritmo da calculadora utilizando funções. Implementar as seguintes
opções: soma, subtração, multiplicação e divisão. */

#include <iostream>
using namespace std;

float soma(float num1, float  num2){
    return num1+num2;
}
float subtrair(float num1, float  num2){
    return num1-num2;
}
float multiplicar(float num1, float  num2){
    return num1*num2;
}
float dividir(float num1, float  num2){
    return num1/num2;
}

int main(){
    int opcao;
    float resultado, primeiro, segundo;


    cout << "digite o primeiro numero: " << endl;
    cin >> primeiro;
    cout << "digite o segundo numero: " << endl;
    cin >> segundo;

    cout << "digite qual operacao voce deseja realizar: (1- somar) (2-subtrair) (3-multiplicar)(4-dividir): ";
    cin >> opcao;
    switch (opcao){
        case 1: 
            resultado = soma(primeiro, segundo);
            break;
        case 2: 
            resultado = subtrair(primeiro, segundo);
            break;
        case 3: 
            resultado = multiplicar(primeiro, segundo);
            break;
        case 4: 
            resultado = dividir(primeiro, segundo);
            break;
        defalt:
            cout << "voce nao digitou uma opcao valida!";
            break;
    }

    cout << "o resultado deu: " << resultado;
}