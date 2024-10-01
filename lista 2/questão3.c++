/*Calcule o peso ideal de uma pessoa. Dados de entrada: altura e gênero (“m”-masculino ou “f”-feminino). 
Utilize as seguintes fórmulas para cálculo do peso ideal:   
• Masculino = (72,7 x altura) - 58   
• Feminino = (62,1 x altura) - 44,7 */


#include <iostream>
using namespace std;

int main (){
    float altura, pesoIdeal;
    char genero;

    cout << "escreva respectivamente sua altura e genero";
    cout << "\n(m masculino ou f feminino)\n";
    cin >> altura >> genero;

    if (genero == 'm'){
        pesoIdeal = (72,7 * altura)-58;
        cout << "o seu peso ideal é: " << pesoIdeal;
    }
    else if (genero == 'f'){
       pesoIdeal = (62,1 * altura)-47,7; 
       cout << "o seu peso ideal é: " << pesoIdeal;
    }
    else {
        cout << "voce nao digitou um genero valido";
    }

    return 0;
}
