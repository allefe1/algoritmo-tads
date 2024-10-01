/*Crie um algoritmo que ajude o DETRAN a saber o total de recursos que foram arrecadados com a
aplicação de multas de trânsito. O algoritmo deve ler as seguintes informações para cada um dos N
motoristas:
- O número da carteira de motorista (inteiro);
- Número de multas;
- O valor de cada uma das multas.
Deve ser impresso o valor da dívida de cada motorista e ao final da leitura o total de recursos arrecadados
(somatório de todas as multas). O algoritmo deverá imprimir também o número da carteira do motorista
que obteve o maior número de multas. */

#include <iostream>
using namespace std;

int main(){
    int numeroCarteira, motoristas;
    int carteiraMaior = 0;
    int numeroMultas;
    float valorMulta, multas;
    float maiorMulta = 0;
    float totalRecursos = 0;
    
    cout << "quantos motoristas? ";
    cin >> motoristas;

    for (int cont = 1; cont <= motoristas; cont++){
        cout << "qual o numero da carteira do motorista " << cont <<"? ";   
        cin >> numeroCarteira;
        cout << "quantas multas? ";
        cin >> numeroMultas;

            multas = 0;
            for (int cont2 = 1; cont2 <= numeroMultas; cont2++) {
                cout << "qual o valor da multa " << cont2 << "? ";
                cin >> valorMulta;
                multas = multas + valorMulta; 
                if (numeroMultas >= maiorMulta){
                    maiorMulta = numeroMultas;
                    carteiraMaior = numeroCarteira;
                }
            }
        cout << "o valor da divida do motorista " << numeroCarteira << " foi de: " << multas << "\n";
        totalRecursos = totalRecursos + multas;
        

    }
        cout << "o somatorio de recursos arrecadaos foi de " << "R$ " << totalRecursos << "\n";
        cout << "o numero da carteira de motoristas que obteve o maior numero de multas foi: " << carteiraMaior;


}