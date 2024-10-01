/*Elabore um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos valores
pares existem no vetor e troque cada um desses elementos por 0. Em seguida escreva o vetor final.*/

#include <iostream>
using namespace std;

int main(){
    int tamanho = 20;
    int vetor[tamanho];
    int contagem = 0;

    for (int i = 0; i<tamanho; i++){
        cout << "digite o " << i+1 << " elemento:  " << endl;
        cin >> vetor[i];
    }

    for (int i = 0; i<tamanho; i++){
        if(vetor[i] % 2 == 0){
            contagem++;
            vetor[i] = 0;
        }
    }

    cout << "o numero de elementos pares foi: " << contagem << endl;
    cout << "o vetor final foi esse: " << endl;

    for (int i = 0; i<tamanho; i++){
        cout << vetor[i] << endl;
    }

    return 0;
}