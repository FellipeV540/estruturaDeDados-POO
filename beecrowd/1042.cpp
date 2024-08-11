#include <iostream>
#include <algorithm> // Para std::sort

int main() {
    int valores[3];

    // Lendo os 3 valores inteiros
    for (int i = 0; i < 3; ++i) {
        std::cin >> valores[i];
    }

    // Copiando os valores para outro array para impressão posterior
    int valoresOriginais[3];
    std::copy(valores, valores + 3, valoresOriginais);

    // Ordenando o array
    std::sort(valores, valores + 3);

    // Imprimindo os valores em ordem crescente
    for (int i = 0; i < 3; ++i) {
        std::cout << valores[i] << std::endl;
    }

    // Linha em branco
    std::cout << std::endl;

    // Imprimindo os valores na ordem original
    for (int i = 0; i < 3; ++i) {
        std::cout << valoresOriginais[i] << std::endl;
    }

    return 0;
}
