#include <iostream>
#include <cmath> // Para a função sqrt
using namespace std;

class Ponto {
private:
    double x;
    double y;

public:
    // Construtor para inicializar um ponto
    Ponto(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    // Declarando a função amiga calcularComprimento
    friend double calcularComprimento(const Ponto &p1, const Ponto &p2);
};

class Linha {
private:
    Ponto ponto1;
    Ponto ponto2;

public:
    // Construtor para inicializar a linha com dois pontos
    Linha(Ponto p1, Ponto p2) : ponto1(p1), ponto2(p2) {}

    // Função amiga para calcular o comprimento da linha
    friend double calcularComprimento(const Linha &l);
};

// Função amiga para calcular o comprimento entre dois pontos
double calcularComprimento(const Ponto &p1, const Ponto &p2) {
    double deltaX = p2.x - p1.x;
    double deltaY = p2.y - p1.y;
    return sqrt(deltaX * deltaX + deltaY * deltaY); // Fórmula da distância euclidiana
}

// Função amiga para calcular o comprimento de uma linha
double calcularComprimento(const Linha &l) {
    return calcularComprimento(l.ponto1, l.ponto2);
}

int main() {
    // Criando dois pontos
    Ponto p1(10.0, 5.0);
    Ponto p2(20.0, 5.0);

    // Criando uma linha usando os dois pontos
    Linha linha(p1, p2);

    // Calculando e exibindo o comprimento da linha
    double comprimento = calcularComprimento(linha);
    cout << "O comprimento da linha é: " << comprimento << endl;

    return 0;
}
