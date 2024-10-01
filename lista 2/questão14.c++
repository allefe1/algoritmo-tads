/*Leia 3 números inteiros e escreva uma das seguintes mensagens: 
• Todos os números são iguais; 
• Todos os números são diferentes; 
• Apenas dois números são iguais.*/

#include <iostream>
using namespace std;

int main (){
    int num1, num2, num3;
    cout << "digite 3 numeros inteiros: ";
    cin >> num1 >> num2 >> num3;

    if(num1==num2 && num1==num3){
        cout << "Todos são iguais";
    }else if (num1!=num2 && num1!=num3 && num2 != num3){
        cout << "todos são diferentes";
    }else if (num1==num2 || num1 == num3 || num2 == num3){
        cout << "apenas dois sao iguais";
    }
    return 0;
}