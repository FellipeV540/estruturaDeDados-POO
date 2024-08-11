#include <iostream>
using namespace std;

int main() {
    int valor;
    cin >> valor;

    // Valor inicial para exibição
    int valorInicial = valor;

    // Lista de cédulas
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    int quantidadeNotas[7];

    // Inicializa o array de quantidades com zero
    for (int i = 0; i < 7; ++i) {
        quantidadeNotas[i] = 0;
    }

    // Cálculo do número de notas
    for (int i = 0; i < 7; ++i) {
        quantidadeNotas[i] = valor / notas[i];
        valor %= notas[i];
    }

    // Exibe o valor lido
    cout << valorInicial << endl;

    // Exibe a quantidade de cada nota
    for (int i = 0; i < 7; ++i) {
        cout << quantidadeNotas[i] << " nota(s) de R$ " << notas[i] << ",00" << endl;
    }

    return 0;
}
