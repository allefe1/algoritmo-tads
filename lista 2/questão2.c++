/*Leia um número, verifique e escreva se este número é par ou ímpar. Se for par, verifique e escreva se é 
maior que 100 ou não e se for ímpar verifique e escreva se é positivo ou negativo*/

#include <iostream>
using namespace std;

int main (){
    int num;

    cout << "escreva um numero qualquer! ";
    cin >> num;

    if (num % 2 == 0){
        cout << "\nesse numero é par";
        if (num > 100){
            cout << "\nesse numero é maior que 100";
        }
        else if (num < 100){
            cout << "\nesse numero é menor que 100";
        }
    } else{
        cout << "\nesse numero é impar";
        if (num >= 0){
            cout << "\nesse numero é positivo";
        }
        else if (num < 0){
            cout << "\nesse numero é negativo";
        }

    }
return 0;
}