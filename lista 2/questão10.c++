/* A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo de 0 até 10, 
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média 
das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação 
Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (media 
entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado.   */

#include <iostream>
using namespace std;

int main(){
    float notaFinal, nota1, nota2, nota3;

    cout << "diga a nota do trabalho de laboratório: \n";
    cout << "diga a nota da avaliacao semestral: \n";
    cout << "diga a nota do exame final: \n";
    cin >> nota1 >> nota2 >> nota3;

    if (0 < nota1 && nota1 <= 10){
        if (0 < nota2 && nota2 <= 10){
            if (0 < nota3 && nota3 <= 10){
                notaFinal = ((nota1*2) + (nota2*3) + (nota3*3))/8;
                if(notaFinal<=2.9){
                    cout << "sua nota foi: " << notaFinal << "você esta reprovado\n";
                }else if(notaFinal>3 && notaFinal <=4.9){
                    cout << "sua nota foi: " << notaFinal << "você esta de recuperacao\n";
                }else if (notaFinal>4.9){
                    cout << "sua nota foi: " << notaFinal << "você esta de aprovado\n";
                }
            }
        }
    }
    else{
        cout << "voce digitou uma nota que nao é valida";
    }
    return 0;
}