/*Elabore um algoritmo que leia dois vetores V1 e V2 de 10 posições cada e faça a multiplicação dos elementos 
de mesmo índice, colocando o resultado em um terceiro vetor V3. Mostre o vetor resultante.   */

#include <iostream>
using namespace std;

int main (){
    int tamanho = 10;
    int V1[tamanho], V2[tamanho], V3[tamanho];

    cout << "digite os 10 numeros do primeiro e segundo vetor: " << endl;
    
    for(int i; i < tamanho; i++){
        cout << "V1[" << i << "]: ";
        cin >> V1[i];
    }
    for(int x; x < tamanho; x++){
        cout << "V2[" << x << "]: ";
        cin >> V2[x];
    }

    for(int i = 0; i < tamanho; i++){
        V3[i] = V1[i] * V2[i];
        cout << "o resultado do vetor na posicao [" << i << "] foi: " << endl;
        cout << V3[i] << endl;
    }

    return 0;
}