/*A escola “APRENDER” faz o pagamento de seus professores por hora/aula. Faça um algoritmo que calcule 
e escreva o salário de um professor, sabendo que o valor da hora/aula segue a tabela abaixo: */

#include <iostream>
using namespace std;

int main(){
    float precoAula;
    int horas, codigo;

    cout << "quantas horas de aula voce deu? ";
    cin >> horas;

    cout << "digite qual nivel voce esta\n";
    cout << "1 = 12 reais por hora\n";
    cout << "2 = 17 reais por hora\n";
    cout << "3 = 25 reais por hora\n";
    cin >> codigo;

    if (codigo == 1){
        precoAula = horas * 12;
    } else if (codigo == 2){
        precoAula = horas * 17;
    }else if (codigo == 3){
        precoAula = horas * 25;
    }

    cout << "o seu salario foi de: " << precoAula << "R$";
}