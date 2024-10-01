/*Elabore um algoritmo que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou 
não se aposentar. As condições para aposentadoria são: 
• Ter pelo menos 65 anos; 
• Ou ter trabalhado pelo menos 30 anos; 
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. 
*/

#include <iostream>
using namespace std;

int main (){
    int tempoServico, idade;

    cout << "digite a sua idade: ";
    cin >> idade;

    cout << "digite seu tempo de servico :";
    cin >> tempoServico;

    if(idade >= 65){
        cout << "voce pode se aposentar";
    }else if (tempoServico >= 30){
        cout << "voce pode se aposentar";
    }else if (idade >= 60 || tempoServico >= 25){
        cout << "voce pode se aposentar";
    }else {
        cout << "voce nao pode se aposentar";
    }

    return 0;
}