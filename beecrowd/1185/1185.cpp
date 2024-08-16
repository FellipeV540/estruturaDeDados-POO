#include <iostream>
using namespace std;
#include <iomanip>


int main() {
    char operacao;
    double matriz[12][12], soma = 0.0;
    int contador = 0;

    cin >> operacao;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12 - i - 1; j++) {
            soma += matriz[i][j];
            contador++;
        }
    }

    if (operacao == 'S') {
        cout << fixed << setprecision(1) << soma << endl;
    } else if (operacao == 'M') {
        cout << fixed << setprecision(1) << soma / contador << endl;
    }

    return 0;
}
