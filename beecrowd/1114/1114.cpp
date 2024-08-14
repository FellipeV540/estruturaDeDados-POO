#include <iostream>
using namespace std;

int main() {
    int N, senha;
    senha = 2002;
    cin >> N;
    while (N != senha){
        cout << "Senha Invalida" << endl;
        cin >> N;
    }
    if (N == senha) {
        cout << "Acesso Permitido" << endl;
    }
    return 0;
}
