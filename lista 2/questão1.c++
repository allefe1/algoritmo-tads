/*Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um 
triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles 
não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:   
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;   
• Equiláteros: tem os comprimentos dos três lados iguais;   
• Isósceles: tem os comprimentos de dois lados iguais;  •  Escaleno: tem os comprimentos dos três 
lados diferentes. */

#include <iostream>
using namespace std;

int main () {
    float ladoA, ladoB, ladoC;

    cout << "dê três valores para os lados de um triangulo: ";
    cin >> ladoA >> ladoB >> ladoC;

    if (ladoA == ladoB && ladoA == ladoC && ladoB == ladoC) {
        cout << "o resultado deu um triangulo equilatero";
    }else if (ladoA == ladoC) {
        cout << "o resultado deu um triangulo isoceles";
    }   else if (ladoA != ladoB && ladoA != ladoC && ladoB != ladoC) {
        cout << "o resultado deu um triangulo escaleno";
    }


return 0;
}