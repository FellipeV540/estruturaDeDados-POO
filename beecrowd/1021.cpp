#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double valor;
    cin >> valor;

    // Convertemos o valor para centavos para evitar problemas de precisão com floats
    int centavos = static_cast<int>(valor * 100 + 0.5);

    // Notas e moedas
    int notas[6] = {10000, 5000, 2000, 1000, 500, 200}; // valores em centavos
    int moedas[6] = {100, 50, 25, 10, 5, 1}; // valores em centavos

    int quantidadeNotas[6] = {0};
    int quantidadeMoedas[6] = {0};

    // Calcula o número de notas
    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; ++i) {
        quantidadeNotas[i] = centavos / notas[i];
        centavos %= notas[i];
        cout << quantidadeNotas[i] << " nota(s) de R$ " << fixed << setprecision(2) << notas[i] / 100.0 << endl;
    }

    // Calcula o número de moedas
    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; ++i) {
        quantidadeMoedas[i] = centavos / moedas[i];
        centavos %= moedas[i];
        cout << quantidadeMoedas[i] << " moeda(s) de R$ " << fixed << setprecision(2) << moedas[i] / 100.0 << endl;
    }

    return 0;
}
