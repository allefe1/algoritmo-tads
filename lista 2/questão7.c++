/*O cardápio de uma lanchonete é o seguinte:   
  
Sanduíche   
Código  Descrição  Preço Unitário  
100  Cachorro quente  1,10  
101  Baurú simples  1,30  
102  Baurú com ovo  1,50  
103  Hamburger  1,10  
104  Cheesburger  1,30  
Bebida   
Código  Descrição  Preço Unitário  
105  Refrigerante  1,00  
106  Suco  2,00  
107  Nescau  1,50  
  
Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade 
de cada um e calcule o valor a ser pago por aquele lanche.  */

#include <iostream>
using namespace std;

int main (){
    int codigol, codigoB, quantidadeB, quantidadel;
    float valorl, valorB;

    cout << "digite o codigo do lanche: \n";
    cout << "100  Cachorro quente\n 101 bauru simples \n 102 bauru com ovo\n 103 hamburguer\n 104 cheesburguer\n";
    cin >> codigol;

    cout << "digite o codigo da bebida: \n";
    cout << "105  refrigerante\n 106 suco \n 107 nescau\n ";
    cin >> codigoB;

    switch(codigol){
        case 100: valorl = (1.10);
            break;
        case 101: valorl = (1.30);
            break;
        case 102: valorl = (1.50);
            break;
        case 103: valorl = (1.10);
            break;
        case 104: valorl = (1.30);
            break;
    }
    switch(codigoB){
        case 105: valorB = (1.00);
            break;
        case 106: valorB = (2.00);
            break;
        case 107: valorB = (1.50);
            break;

}
    cout << "quantidade de bebidas: ";
    cin >> quantidadeB;

    cout << "quantidade de lanches: ";
    cin >> quantidadel;

    cout << "o velor a ser pago em bebidas é: " << quantidadeB*valorB << "\n";
    cout << "o valor a ser pago em lanches é: " << quantidadel*valorl;
}