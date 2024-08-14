#include <iostream>
#include <iomanip>

int main() {
    // Definindo o código do item e a quantidade
    int codigo, quantidade;

    // Lendo o código e a quantidade do item
    std::cin >> codigo >> quantidade;

    // Variável para armazenar o preço do item
    double preco;

    // Atribuindo o preço baseado no código
    switch (codigo) {
        case 1: preco = 4.00; break;
        case 2: preco = 4.50; break;
        case 3: preco = 5.00; break;
        case 4: preco = 2.00; break;
        case 5: preco = 1.50; break;
        default: preco = 0.00; break; // Código inválido, preço 0.00
    }

    // Calculando o valor total a pagar
    double total = preco * quantidade;

    // Configurando a precisão para 2 casas decimais
    std::cout << std::fixed << std::setprecision(2);

    // Mostrando o resultado
    std::cout << "Total: R$ " << total << std::endl;

    return 0;
}
