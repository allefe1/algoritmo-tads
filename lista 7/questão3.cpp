/*Escreva uma função que recebe 2 números inteiros n1 e n2 como entrada e
retorna a soma de todos os números inteiros contidos no intervalo [n1,n2]. Use esta
função em um programa que lê n1 e n2 do usuário e imprime a soma. */

#include <iostream>
using namespace std;

int exibir (int n1, int n2){
    int soma = 0;

    if(n1 > n2){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for(int i = n1; i <= n2; i++){
        soma += i;
    }

    return soma;
}

int main (){
    int somaF, num1, num2;
    
    cout << "digite um numero inicial: " << endl;
    cin >> num1;
    cout << "digite o numero final: " << endl;
    cin >> num2;

    somaF = exibir(num1,num2);

    cout << "a soma do intervalo de numeros " << num1 << " ate " << num2 << " foi de: " << somaF;

    return 0;
}