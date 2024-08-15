#include <iostream>
using namespace std;

int main() {
    int A, N;

    // Ler os valores de A e N
    cin >> A >> N;

    // Enquanto N for menor ou igual a zero, continue lendo novos valores para N
    while (N <= 0) {
        cin >> N;
    }

    // Calcular a soma de A + i para i de 0 a N-1
    int soma = 0;
    for (int i = 0; i < N; i++) {
        soma += A + i;
    }

    // Imprimir o resultado
    cout << soma << endl;

    return 0;
}
