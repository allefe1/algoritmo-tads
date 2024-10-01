/*Elabore um algoritmo que leia um número inteiro maior do que zero (máximo de 5 algarismos), verifique 
e escreva a soma de todos os seus algarismos. Por exemplo, para o número 251 a soma será 8 (2 + 5 + 
1). Se o número lido não for maior do que zero, o programa terminar com a mensagem “Número 
inválido”.  */


#include <iostream>
using namespace std;

int main (){
    int numero, num1, num2, num3, num4, num5;

    cout << "escreva um numero inteiro menor que 100000: ";
    cin >> numero;

    if(numero>0){
        if(numero>0 && numero <100000){
            num1 = numero/10000;
            num2 = (numero%10000)/1000;
            num3 = (numero%10000)%1000/100;
            num4 = (numero%10000)%1000%100/10;
            num5 = (numero%10000)%1000%100%10;
            
            cout << "a soma dos numeros " << num1 <<"+" <<num2 <<"+" <<num3 <<"+" <<num4 <<"+" <<num5 <<"=" << num1+num2+num3+num4+num5;
        }
    }else {
        cout << "numero invalido";
    }
}