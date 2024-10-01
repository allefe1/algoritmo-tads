//Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das 
//informações número de anos que ele fuma, quantidade] de cigarros fumados por dia e preço de 
//uma carteira.  

#include <iostream>
using namespace std;

int main(){
    int anosFumando, fumoPordia;
    int carteira, gastoTotal;

    cout << "escreva respectivamente quantos anos você fuma, quantos cigarros fuma por dia e quanto custa a carteira: ";
    cin >> anosFumando >> fumoPordia >> carteira;

    gastoTotal = anosFumando*365*fumoPordia/20*carteira; //calculo o gasto total do fumante, multiplico tudo mas divido por 20 pois é o tanto de cigarro que vem numa carteira
    
    cout << "o dinheiro que você já gastou fumando é:" << gastoTotal;
    
    return 0;
}