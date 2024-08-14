#include <iostream>
#include <cmath>  // Para a função sqrt()

int main() {
    double A, B, C;
    std::cin >> A >> B >> C;

    // Verificar se A é zero
    if (A == 0) {
        std::cout << "Impossivel calcular" << std::endl;
        return 0;
    }

    double delta = B * B - 4 * A * C;

    // Verificar se delta é negativo
    if (delta < 0) {
        std::cout << "Impossivel calcular" << std::endl;
        return 0;
    }

    // Calcular as raízes
    double sqrt_delta = sqrt(delta);
    double R1 = (-B + sqrt_delta) / (2 * A);
    double R2 = (-B - sqrt_delta) / (2 * A);

    // Imprimir resultados com 5 casas decimais
    std::cout.precision(5);
    std::cout << std::fixed;  // Definir o formato de saída como fixo
    std::cout << "R1 = " << R1 << std::endl;
    std::cout << "R2 = " << R2 << std::endl;

    return 0;
}
