//O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do 
//distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem 
//do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de 
//fábrica de um carro e escreva o custo ao consumidor.

#include <iostream>
using namespace std;

int main (){
    float custodeFabrica, distribuidor, impostos, custoConsumidor, impostostotais;
    distribuidor = 0.28;
    impostos = 0.45;
    impostostotais = distribuidor+impostos;
    
    cout << "o custo de fabrica do veiculo foi de? ";
    cin >> custodeFabrica;

    custoConsumidor = custodeFabrica + custodeFabrica*impostostotais; //aqui tem que ser o custo de fabrica mais o custo de fabrica x impostos totais

    cout << "o custo total do veiculo foi de: " << custoConsumidor;
    return 0;
}