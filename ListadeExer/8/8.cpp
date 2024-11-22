#include <iostream>
using namespace std;

class Caixa{
    private:
        double comprimento;
        double largura;
        double altura;

    public:
        void setC (double C){
            comprimento = C;
        };
        void setL (double L){
            largura = L;
        };
        void setA (double A){
            altura = A;
        };

        friend double calcularVolume(Caixa &c);
};

double calcularVolume(Caixa &c){
    return c.comprimento * c.largura * c.altura;
}

int main(){
    Caixa caixa1;
    caixa1.setC(10);
    caixa1.setL(10);
    caixa1.setA(10);

    double volume = calcularVolume(caixa1);
    cout << volume << endl;

    return 0;
}