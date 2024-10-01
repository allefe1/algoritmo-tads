/*Elabore um algoritmo para ler um vetor A de 20 números inteiros e obter a maior diferença entre dois 
elementos consecutivos desse vetor. Ao final, escreva a maior diferença e os índices dos respectivos 
elementos.  */

#include <iostream>
using namespace std;

int main(){
    int tamanho = 20;
    int vet[tamanho];
    int maiorDife = 0;
    int indice = 0;
    int indiA, indiB;
    int aux;

    cout << "digite 20 elementos: " << endl;
    for(int i = 0; i < tamanho; i++){
        cout << "digite o " << i+1 << " elemento: " << endl;
        cin >> vet[i];
        indice = vet[i];  //codigo ta todo quebrado

        aux = vet[i] - indice;

        if (aux >= maiorDife){
            maiorDife = aux;
            indiA = i+1;
            indiB = i+2;
        }
    }

    cout << "a maior diferenca foi de: " << maiorDife << "e os indices dos respectivos elementos sao: " << indiA << " e " << indiB;

}