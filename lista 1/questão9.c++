#include <iostream>
using namespace std;

int main (){
    int a, b, c, d;

    cout << "escreva um valor para A e depois um para B ";
    cin >> a >> b;
   
    c = a;
    d = b;
    a = d;
    b = c;

    cout << "o valor de A agora é: " << a << "\n";
    cout << "o valor de B agora é: " << b << "\n";

    return 0;
}