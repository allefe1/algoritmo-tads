/*Elabore um algoritmo preencha o cadastro de 10 alunos contendo matricula, nome,
endereço e média geral. Após o preenchimento, deve ser somado o valor 0,5 às médias de
todos os alunos que tiveram médias maiores que 5. Em seguida escreva o vetor final. 
*/

#include <iostream>
using namespace std;

struct alunos{
        string nome;
        int matricula;
        string endereco;
        float media;
    };


int main(){
    int numAlunos = 3;
    alunos aluno[numAlunos];

    for(int i = 0; i < numAlunos; i++ ){
        cout << "Cadastro dos alunos: " << endl;
        cout << "digite a matricula do aluno [" << i+1 << "] :"<< endl;
        cin >> aluno[i].matricula;

        cout << "digite o nome do aluno: [" << i+1 << "] :"<< endl;
        cin >> aluno[i].nome;

        cout << "digite o endereco do aluno: [" << i+1 << "] :"<< endl;
        cin >> aluno[i].endereco;

        cout << "digite a media geral do aluno: [" << i+1 << "] :"<< endl;
        cin >> aluno[i].media;
    }

    for(int i = 0; i < numAlunos; i++){
        if (aluno[i].media > 5){
            aluno[i].media += 0.5;
        }
    }

    for (int i = 0; i < numAlunos; i++){
        cout << "\taluno: " << i+1 << endl;
        cout << "da matricula de numero: " << aluno[i].matricula << endl;
        cout << "de nome: " << aluno[i].nome << endl;
        cout << "de endereco: " << aluno[i].endereco << endl;
        cout << "de media: " << aluno[i].media << endl;
    }

    return 0;

}