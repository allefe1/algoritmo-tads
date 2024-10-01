/*Elaborar um algoritmo que leia um vetor de 10 posições de inteiros e chame uma
função MinMax. Esta função deve receber o vetor lido e, por referência, duas variáveis
inteiras, min e max. O objetivo da função é buscar os valores do menor e maior
elementos do vetor e atribuir às variáveis min e max respectivamente. */

#include <iostream>
using namespace std;

int MinMax(int vetor[10], int& min, int& max){
    
    max = vetor[0];
    min = vetor[0];

    for(int i = 1; i < 10; i++){
        if(vetor[i] > max){
            max = vetor[i];
        }

        if(vetor[i] < min){
            min = vetor[i];
        }
    }


}

int main(){
    int vetor[10];
    int min, max;

    for(int i = 0; i < 10; i++){
        cout << "digite o " << i+1 << " numero do vetor!" << endl;
        cin >> vetor[i];
    }

    MinMax(vetor, min, max);


    cout << "o maior numero do vetor foi: " << max << endl;
    cout << "o menor numero do vetor foi: " << min << endl;

    return 0;
}