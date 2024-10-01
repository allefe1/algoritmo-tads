/*Elabore um algoritmo que leia a distância em km e a quantidade de litros de gasolina consumidos por 
um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela 
abaixo: 
CONSUMO (Km/l) MENSAGEM 
Menor que 8 Venda o carro! 
Entre 8 e 12 Econômico! 
Maior que 12 Super econômico!*/

#include <iostream>
using namespace std;

int main(){
    float km, litros, consumo;

    cout << "digite a distancia em KM: ";
    cin >> km;

    cout << "digite a quantidade de litros de gasolina: ";
    cin >> litros;

    consumo = km/litros;

    if(consumo<8){
        cout << "venda o carro!";
    }else if (consumo>=8 && consumo<=12){
        cout << "Ecônomico!";
    }else if (consumo>12){
        cout << "super economico!";
    }
    return 0;
}