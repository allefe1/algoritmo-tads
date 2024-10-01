//Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso 
//em horas, minutos e segundos.  

#include <iostream>
using namespace std;

int main () {
    int tempoDuracao, horas, minutos, segundos, resto;

    cout << "escreva o tempo em segundos: ";
    cin >> tempoDuracao;

    horas = tempoDuracao/3600; //para conseguir as horas, dividi o tempo total por 3600
    resto = tempoDuracao%3600; //precisa do resto dessa divisao pois ela será os minutos
    minutos = resto/60; //os minutos são o resto dividido por 60
    segundos = resto%60; //o resto da divisao anterios serao os minutos

    cout << "o tempo total expresso em horas foi de: " << horas  << "\n";
    cout << "em minutos foi de: " << minutos << "\n";
    cout << "em segundos foi de: " << segundos << "\n";

    return 0;
}