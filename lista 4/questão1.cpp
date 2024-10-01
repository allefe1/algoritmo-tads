/*Elabore um algoritmo que leia 20 elementos de um vetor de inteiros e, em seguida, um valor de código. Se o
código for 1, mostrar o vetor na ordem direta (do primeiro até o último), se o código for 2, mostrar o vetor
na ordem inversa (do último até o primeiro). */

#include <iostream>
using namespace std;

int main(){

    int elementos[19];
    int codigo;

    for(int i = 0; i<20; i++){
        cout << "digite o " << i+1 << " elemento: ";
        cin >> elementos[i];
    }


    do{
        cout << "digite um um valor de codigo! (1 para ordem direta) (2 para ordem indireta) E (3 para Sair) ";
        cin >> codigo;

        if(codigo==1){
            for(int i2 = 0; i2<20; i2++){
                cout << elementos[i2] << endl;
            }
        }else if(codigo==2){
            for(int i3 = 20; i3>0; i3--){
                cout << elementos[i3] << endl;
            }
        } else {
            cout << "voce saiu do sistema";
        }
    }while(codigo==1 || codigo==2);

    return 0;

}