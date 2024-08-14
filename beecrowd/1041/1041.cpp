#include <iostream>
#include <iomanip> // Para a função setprecision
using namespace std;

int main() {
    double x, y;

    // Lê os valores de x e y
    cin >> x >> y;

    // Verifica a origem
    if (x == 0.0 && y == 0.0) {
        cout << "Origem" << endl;
    }
    // Verifica se está sobre o eixo X
    else if (x != 0.0 && y == 0.0) {
        cout << "Eixo X" << endl;
    }
    // Verifica se está sobre o eixo Y
    else if (x == 0.0 && y != 0.0) {
        cout << "Eixo Y" << endl;
    }
    // Verifica o quadrante
    else {
        if (x > 0.0 && y > 0.0) {
            cout << "Q1" << endl;
        }
        else if (x < 0.0 && y > 0.0) {
            cout << "Q2" << endl;
        }
        else if (x < 0.0 && y < 0.0) {
            cout << "Q3" << endl;
        }
        else if (x > 0.0 && y < 0.0) {
            cout << "Q4" << endl;
        }
    }

    return 0;
}
