#include <iostream>
using namespace std;

class Veiculo{
public:
    string marca;
    string modelo;
    void exibirDetalhes(){
        cout << marca << " " << modelo << endl;
    }
};
class Carro : public Veiculo{
    public:
        int numeroPortas;
        void exibirDetalhes(){
            cout << marca << " " << modelo << " " << numeroPortas << endl;
        }
};

int main(){
    Veiculo v1;
    v1.marca = "ford";
    v1.modelo = "ka";
    v1.exibirDetalhes();
    Carro c1;
    c1.marca = "toyota";
    c1.modelo = "supra";
    c1.numeroPortas = 2;
    c1.exibirDetalhes();

    return 0;
}