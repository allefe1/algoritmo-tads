/*14. Elabore um algoritmo que leia uma matriz 4x5 de números reais. Em seguida, calcule a soma dos elementos
de cada coluna, armazenando o resultado da soma em um vetor de 5 elementos. Escreva a matriz e o vetor.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    srand(time(0));
    int linhas = 4;
    int colunas = 5;
    float matriz[linhas][colunas];
    float vetor[colunas] = {};

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = rand() % 11;
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            vetor[j] += matriz[i][j];
        }
    }


    cout << "a matriz foi essa: "  << endl;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << matriz[i][j] << ',';
        }
        cout << endl;
    }

    cout << "a soma de cada coluna deu: " << endl;
    for(int j = 0; j<colunas; j++){
        cout << vetor[j] << ',';
    }
}