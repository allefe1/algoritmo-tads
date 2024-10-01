/*Crie um algoritmo para manipular vetores. O seu programa deve implementar
uma função chamada inverteVetor, que recebe como parâmetro dois vetores V1 e V2,
ambos de tamanho N. A função deve copiar os elementos de V1 para V2 na ordem
inversa. Ou seja, se a função receber V1 = {1,2,3,4,5}, a função deve copiar os elementos
para V2 na seguinte ordem: V2 = {5,4,3,2,1}. Além disso, a função também deve retornar
o maior valor encontrado em V1. A função deve possuir a seguinte assinatura: int
inverteVetor(int *v1, int *v2, int n); Elabore um teste da função no main. */

#include <iostream>
using namespace std;

int inverteVetor(int *v1, int *v2, int n){
    int maior = v1[0];


    for(int i = 0; i < n; i++){
        v2[i] = v1[n- 1 -i];

        if (v1[i] > maior){
            maior = v1[i];
        }
    }

    return maior;

}

int main(){
    int n = 5;
    int v1[n];
    int v2[n];
    int maiorElemento;

    for (int i = 0; i < n; i++){
        cout << "digite o " << i+1 << " numero do vetor: " << endl;
        cin >> v1[i];
    }

    maiorElemento = inverteVetor(v1, v2, n);

    for (int i = 0; i < n; i++){
        cout << v2[i] << ",";
    }

    cout << "o maior elemento do vetor 1 foi: " << maiorElemento << endl;

    return 0;

}