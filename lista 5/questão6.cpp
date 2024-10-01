/*Escreva um algoritmo que leia uma matriz M(10,10) e a escreva. Troque, a seguir:
- Os elementos da diagonal principal pelos elementos da diagonal secundária;
- Os elementos da linha 5 com os da coluna 10.
Escreva a matriz modificada. */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
    srand(time(0));

    const int tamanho = 10;
    int matriz[tamanho][tamanho];

    for (int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            matriz[i][j] = rand () % 11;
        }
    }



    cout << "\t\n matriz original: " << endl;
    for(int i = 0; i<tamanho; i++){
        for(int j = 0; j<tamanho; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < tamanho; i++){
        int aux = matriz[i][i];
        matriz[i][i] = matriz[i][tamanho-i-1];
        matriz[i][tamanho-i-1] = aux;
    }

    for(int i = 0; i < tamanho; i++){
        int aux = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = aux;
    }

    cout << "\t\n matriz modificada: " << endl;
    for(int i = 0; i<tamanho; i++){
        for(int j = 0; j<tamanho; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

}