/*Elabore um algoritmo que leia 3 números inteiros e uma ordem (“c” – crescente ou “d” – decrescente) e 
escreva-os na ordem solicitada.  */

#include <iostream>
using namespace std;

int main (){
    int num1, num2, num3, vazio;
    char ordem;

    cout << "escreva tres numeros inteiros: ";
    cin >> num1 >> num2 >> num3;

    cout << "qual ordem voce quer eles? 'c' crescente e 'd' decrescente";
    cin >> ordem;

    if (ordem == 'c'){
        if(num1>num3){
            vazio = num1;
            num1 = num3;
            num3 = vazio;
        }if (num1>num2){
            vazio = num1;
            num1 = num2;
            num2 = vazio;
        }if (num2>num3){
            vazio = num2;
            num2 = num3;
            num3 = vazio;
        }
        cout << "os numeros em ordem crescente são: " <<num1 << num2 << num3;
 
    }else if(ordem == 'd'){
            if(num1<num3){
            vazio = num1;
            num1 = num3;
            num3 = vazio;
        }if (num1<num2){
            vazio = num1;
            num1 = num2;
            num2 = vazio;
        }if (num2<num3){
            vazio = num2;
            num2 = num3;
            num3 = vazio;
        }
        cout << "os numeros em ordem decrescente são: " <<num1 << num2 << num3;
    }
    
    return 0;
}