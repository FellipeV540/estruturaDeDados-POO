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

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 11 - i; j++) {
            soma += matriz[i][j];
            contador++;
        }
    }
    if (operacao == 'M') {
        soma /= contador;  
    }
    
    cout << fixed << setprecision(1) << soma << endl;

    return 0;
    }


