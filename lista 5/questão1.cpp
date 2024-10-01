/*1. Elabore um algoritmo que leia uma matriz M(6,6) e um valor A inteiro e multiplique a matriz M pelo valor A
inserindo os resultados em um vetor de V(36). Ao final, escreva o vetor V. */


#include <iostream>
using namespace std;


int main (){

    int matriz [6][6];
    int valor, numero;
    int vetor[36];

    cout << "digite os elementos da matriz: " << endl;
    for(int x = 0; x < 6; x++){
        for(int y = 0; y < 6; y++){
            cout << "elemento  [" << x << "][" << y << "]: " << endl;
            cin >> matriz[x][y];
        }
    }

    cout << "digite um valor para multiplicar a matriz: ";
    cin >> numero;

    for(int x = 0; x < 6; x++){
        for(int y = 0; y < 6; y++){
            matriz[x][y] *= numero;
            for(int v = 0; v < 36; v++){
                vetor[v] = matriz[x][y];
            }
        }
    }

    for(int x = 0; x < 36; x++){
       cout << vetor[x] << ",";
    }

    return 0;

}