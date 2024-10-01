/*Escreva uma função que determine a média e a situação de um aluno em uma
disciplina. A função recebe como parâmetros as três notas de um aluno (p1, p2, e p3),
seu número de faltas (faltas), o número total de aulas da disciplina (aulas) e o ponteiro
para uma variável (media), conforme a seguinte assinatura:
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media); Na
variável indicada pelo ponteiro media, a função deve armazenar a média do aluno,
calculada como a média aritmética das três provas. Além disso, a função deve retornar
um caractere indicando a situação do aluno no curso, definido de acordo com o seguinte
critério: */

#include <iostream>
using namespace std;

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media){
    *media = (p1+p2+p3)/3;
    char letra;

    if(faltas <= 0.25 * aulas && *media >= 6){
        letra = 'A';
    } else if(faltas <= 0.25 * aulas && *media < 6){
        letra = 'R';
    } else if(faltas > 0.25 * aulas){
        letra = 'F';
    }
    return letra;

}

int main(){
    float nota1, nota2, nota3;
    int faltas, aulas;
    float media;
    char letra;

    cout << "digite as suas tres nota:" << endl;
    cin >>nota1 >> nota2 >> nota3;

    cout << "digite quantas faltas teve: " << endl;
    cin >> faltas;

    cout << "digite quantas aulas foram ao todo: " << endl;
    cin >> aulas;

    letra = situacao(nota1, nota2, nota3, faltas, aulas, &media);

    cout << "sua media foi: " << media << endl;

    switch (letra){
        case 'A':
            cout << "voce foi aprovado!" << endl;
            break;
        case 'R':
            cout << "voce foi reprovado!" << endl;
            break;
        case 'F':
            cout << "voce foi reprovado  por  faltas!" << endl;
            break;
    }

    return 0;
}