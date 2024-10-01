/*Elabore um algoritmo que leia um vetor de 15 posições de números inteiros e pergunte ao usuário quais 
elementos ele deseja ver: se os elementos que estão em índices pares ou se os elementos que estão em 
índices ímpares. Mostre somente os elementos solicitados. */


#include <iostream>
using namespace std;

int main (){
    int tamanho = 15;
    int codigo;
    int vet[tamanho];
    int vetpar[tamanho];
    int vetimpar[tamanho];

    for (int i = 0; i < tamanho; i++){
        cout << "digite o " << i+1 << " elemento: " << endl;
        cin >> vet[i];
        if(vet[i] % 2 == 0){
            vetpar[i] = vet[i];
        }else{
            vetimpar[i] = vet[i];
        }
    }

    cout << "digite 1 para ver os elementos pares e 2 para ver os impares: ";
    cin >> codigo;

    if (codigo==1){
        cout << "aqui os numeros pares: " << endl;
        for(int i = 0; i < tamanho; i++){
            cout << vetpar[i] << endl;
        }
    } else if(codigo==2){
        for(int i = 0; i < tamanho; i++){
            cout << vetimpar[i] << endl;
        }
    }else {
        cout << "voce digitou um codigo invalido" ;
    }

    return 0;
}