// Leia dois valores inteiros para as variáveis A e B e efetue as operações de adição,
// subtração, multiplicação e divisão de A por B, apresentando ao final os resultados 
// obtidos. Em seguida leia dois valores lógicos C e D e efetue as operações de negação (de cada um dos valores),
// conjunção (E) e disjunção (OU), apresentando ao final os resultados obtidos. 

#include <iostream>
using namespace std;

int main(){
    int a, b, soma, subtracao, multi, divisi;
    bool c, d, nega1, nega2, conju, disjun; 

    cout << "escreva um valor para A e um valor para B: ";
    cin >> a >> b;

    soma = a+b;
    subtracao = a-b;
    multi = a*b;
    divisi = a/b;

    cout << "a soma foi: " << soma << "\n" <<"a subtraçao foi : " << subtracao << "\n" << "a multiplicaçao foi de: " << multi << "\n" << "a divisao foi de: " << divisi <<"\n";

    cout << "agora digite dois valores logicos, 0 = falso e 1 = verdadeiro ";
    cin >> c >> d;

    nega1 = !c;
    nega2 = !d;
    conju = c && d;
    disjun = c||d;

    cout << "a negaçao foi: " << nega1 << "e" <<nega2 <<"\n";
    cout << "a conjuçao foi: " << conju <<"\n";
    cout << "a disjunçao foi: " << disjun <<"\n";

    return 0;
     
}