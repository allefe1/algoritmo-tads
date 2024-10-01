//Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias. 
//Obs: Considere cada mês com 30 dias.

#include <iostream>
using namespace std;

int main(){
  int anos, meses, dias, idadeTotal;

  cout << "digite sua idade expressa em anos, meses e dias: ";
  cin >> anos >> meses >> dias;

  idadeTotal = anos*360 + meses*12 + dias;

  cout << "sua idade expressa em dias eh: " << idadeTotal;
}