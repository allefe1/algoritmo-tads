/*Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, 
conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário e 
calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de 
aumento. Mostre o salário antigo, o novo salário e a diferença.   */

#include <iostream>
using namespace std;

int main (){
    float salario, codigo, novoSalario;

    cout << "digite seu salario atual: ";
    cin >> salario;

    cout << "codigo 101 = gerente\n";
    cout << "codigo 102 = engenheiro\n";
    cout << "codigo 103 = tecnico\n";
    cout << "digite o codigo do seu do seu cargo atual: \n";
    cin >> codigo;

    if (codigo == 101){
        novoSalario = salario*1.10;
    }else if (codigo == 102){
        novoSalario = salario*1.20;
    }else if (codigo == 103){
        novoSalario = salario*1.30;
    }else{
        novoSalario = salario*1.40;
    }
    
    cout << "seu salario antigo: " << salario << "\nseu novo salario é: " << novoSalario << "\na diferenca deles é :" << novoSalario-salario;

    return 0;
}
    