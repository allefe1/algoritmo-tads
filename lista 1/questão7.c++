//Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A 
//fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura 
//em Celsius.  


#include <iostream>
using namespace std;

int main(){
    float celsius, temperaturaConvertida;

    cout << "digite a temperatura em graus Celsius: ";
    cin >> celsius;
    
    temperaturaConvertida = (celsius*9+150)/5;
    cout << "a temperatura fahrenheit é de: " << temperaturaConvertida;

    return 0;
}