/*Escreva um algoritmo que leia uma matriz M(12,13) e multiplique todos os 13 elementos de cada uma das
12 linhas de M pelo maior elemento daquela linha. Escreva a matriz lida e a modificada. */

#include <iostream>
using namespace std;

int main(){
    const int linhas = 3;
    const int colunas = 3;
    int maior = 0;
    int matriz[linhas] [colunas];

    for(int x = 0; x < linhas; x++){
        for(int y = 0; y < colunas; y++){
            cout << "digite o valor que sera armazenado na posicao: [" << x << "] e [" << y << "]";
            cin >> matriz[x][y];
        }
    }

    cout << "\texibindo a matriz original" << endl;
    for(int x = 0; x < linhas; x++){
        for(int y = 0; y < colunas; y++){
            cout << matriz[x][y] << ",";
        }
        cout << endl;
    }


    //pegando o maior numero de cada linha
    for(int x = 0; x < linhas; x++){
        maior = matriz[x][0];  // manipulando somente as linhas e travando a coluna nesse momento  
        for(int y = 0; y < colunas; y++){ // agora começa a manipular todos os elementos daquela linha, pois vai pular a coluna
            if(matriz[x][y] > maior){
                maior = matriz[x][y];
            }
        }
        
        for (int y = 0; y < colunas; y++){
            matriz[x][y] *= maior;
        }
        
    }

    //exibindo matriz modificada
    cout << "\n\ta matriz modificada: " << endl;
    for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            cout << matriz[i][j] << ",";
        }
        cout << endl;
    }

    return 0;
}