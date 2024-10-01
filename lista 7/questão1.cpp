/*Numa disciplina são dadas duas provas e dois trabalhos, mas a média é calculada
considerando-se apenas a maior nota de prova e a maior nota de trabalho. Elabore um
algoritmo que, dadas as quatro notas de um aluno, informe a sua média. Para isso, utilize
duas funções: uma que determine o maior valor entre as notas (de provas ou de
trabalhos) e outra que calcule a média aritmética das duas maiores notas. 
*/

#include <iostream>
using namespace std;

float maiorNota (float nota1, float nota2){
    if(nota1  >  nota2){
        return nota1;
    } else {
        return nota2;
    }
}

float mediaAritimetica (float nota1, float nota2){
    return (nota1 + nota2)/2;
}

int main (){
    float prova1, prova2, trabalho1, trabalho2;

    cout << "digite sua nota da primeira prova: " << endl;
    cin  >> prova1;
    cout << "digite sua nota da segunda prova: " << endl;
    cin >> prova2;
    cout << "digite a prova do primeiro trabalho: " << endl;
    cin >> trabalho1;
    cout << "digite a prova do segundo trabalho: " << endl;
    cin >> trabalho2;

    float maiorProva = maiorNota(prova1, prova2);
    float maiorTrabalho = maiorNota(trabalho1, trabalho2);

    float Mediafinal = mediaAritimetica(maiorProva, maiorTrabalho);

    cout << "sua media foi de: " <<  Mediafinal;
}

