#include <iostream>
using namespace std;

int main(){
    double A, B, C;
    cin >> A >> B >> C;

    //Area Triangulo
    double aTriangulo = (A * C) / 2;
    printf("TRIANGULO: %.3lf\n", aTriangulo);

    //Area Circulo
    double aCirculo = 3.14159 * (C * C);
    printf("CIRCULO: %.3lf\n", aCirculo);

    //Area Trapézio
    double aTrapezio = ((A + B) * C) / 2;
    printf("TRAPEZIO: %.3lf\n", aTrapezio);

    //Area Quadrado
    double aQuadrado = B * B;
    printf("QUADRADO: %.3lf\n", aQuadrado);

    //Area Retangulo
    double aRetangulo = A * B;
    printf("RETANGULO: %.3lf\n", aRetangulo);

    return 0;
}