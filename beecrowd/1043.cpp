#include <iostream>
#include <iomanip> // Para definir a precisão da saída

using namespace std;

int main() {
    // Definir a precisão
    cout << fixed << setprecision(1);

    // Leitura dos valores
    double A, B, C;
    cin >> A >> B >> C;

    // Verificação se os valores formam um triângulo
    if (A + B > C && A + C > B && B + C > A) {
        // Calcular e exibir o perímetro
        double perimetro = A + B + C;
        cout << "Perimetro = " << perimetro << endl;
    } else {
        // Calcular e exibir a área do trapézio
        double area = (A + B) * C / 2.0;
        cout << "Area = " << area << endl;
    }

    return 0;
}
