/*Elabore um algoritmo que preencha automaticamente um vetor de 20 posições de inteiros gerando os 
elementos a partir da multiplicação do seu índice por 2. Em seguida, calcule e escreva a soma dos elementos 
pares e impares.  */

#include <iostream>
using namespace std;

int main(){
    int tamanho = 20;
    int V1[tamanho];
    int Vimpar[tamanho];
    int Vpar[tamanho];
    int soma1, soma2;

    for(int x = 0; x < tamanho; x++){
        V1[x] = x * 2;
        if (V1[x] % 2 == 0){
            Vpar[x] = V1[x];
            soma1 += Vpar[x];
        }else{
            Vimpar[x] = V1[x];
            soma2 += Vimpar[x];
        }
    }

    cout << "a soma dos vetores pares foi de: " << soma1 << endl;
    cout << "a soma dos vetores impares foi de: " << soma2;
        
    return 0;
}