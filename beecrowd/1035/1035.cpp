#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;

    // Leitura dos quatro valores inteiros
    cin >> A >> B >> C >> D;

    // Verificação das condições
    if (B > C && D > A && (C + D) > (A + B) && C > 0 && D > 0 && A % 2 == 0) {
        cout << "Valores aceitos" << endl;
    } else {
        cout << "Valores nao aceitos" << endl;
    }

    return 0;
}
