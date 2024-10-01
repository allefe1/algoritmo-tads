#include <iostream>
using namespace std;

int main(){
    char a = 'a';
    char d = 'd';
    char m = 'm';
    char i = 'i';
    char n = 'n';
    char z, y, x, v, u;
    int senha = 1234; 
    int senhaTentativa, opcao, saque, deposito, saldo = 1000;
    int maiorSaque = 0;


    cout << "voce pode tentar logar ate 3 vezes, se errar as tres sera bloqueado" << endl;    

    for(int i = 1; i <= 3; i++) {
        cout << "digite o usuario: " << "\n";
        cin >> z >> y >> x >> v >> u;

        cout << "digite a senha: " << "\n";
        cin >> senhaTentativa;

        if (z == 'a' && y == 'd' && x == 'm' && v == 'i' && u == 'n' && senhaTentativa == senha) {
            cout << "Bem vindo ao banco " << endl;
            i = i + 10;
            if ( i >= 10) {
    
                do{
                    cout << "MENU PRINCIPAL: " << "\n";
                    cout << "________________" << "\n";
                    cout << "1- SALDO" << endl;
                    cout << "2- DEPOSITO" << endl;
                    cout << "3- SAQUE" << endl;
                    cout << "4- MAIOR SAQUE" << endl;
                    cout << "5- SAIR" << endl;
                    cout << "escolha a opcao desejada: ";
                    cin >> opcao;

                    switch (opcao){
                        case 1:
                            cout << "seu saldo e: R$ " << saldo << endl;
                        break;

                        case 2:
                            cout << "quanto voce deseja depositar?" << endl;
                            cin >> deposito;

                            saldo += deposito;
                            cout << "deposito realizado com sucesso" << endl;
                        break;

                        case 3:
                            cout << "quanto voce deseja sacar?" << endl;
                            cin >> saque;
                            if (saque >= saldo){
                                saldo -= saque;
                                cout << "seu saldo agora e de: R$ " << saldo << endl;
                            } else {
                                cout << "voce nao tem dinheiro suficiente para sacar";
                            }
                            if (maiorSaque <= saque){
                            maiorSaque = saque; }

                        break;
                        
                        case 4:
                            cout << "seu maior saque foi: R$ " << maiorSaque << endl;
                        break;

        
                    }
                }while (opcao != 5);
        cout << "voce saiu do sistema bancario";
            }

        } else if ((z != 'a' || y != 'd' || x != 'm' || v != 'i' || u != 'n') || (senhaTentativa != senha && i > 3)){
            cout << "acesso negado";
        }
    } 
    
    
}