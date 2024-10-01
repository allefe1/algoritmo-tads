/*Elabore um algoritmo que leia uma matriz A[12][12] e retorna a média aritmética dos elementos abaixo da
diagonal principal.*/

#include <iostream>
#include <cstdlib>
#include <ctime>  
using namespace std;

int main(){

    srand(time(0));

    int linhas = 5; int colunas = 5;
    int matriz[linhas][colunas];
    float soma = 0;
    float mediaAritimetica;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = rand() % 11;
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < i ; j++){
            soma += matriz[i][j];
        }
    }    

    cout << "\t\nessa e a matriz: "<< endl;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << matriz[i][j] << ",";
        }
        cout << endl;
    }

    cout << "a media aritimetica da matriz e: " << soma / linhas;

    return 0;
}