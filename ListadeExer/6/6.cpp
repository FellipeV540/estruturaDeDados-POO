#include <iostream>
using namespace std;

class Carro{
    private:
        string marca;
        string modelo;
        int ano;
    public:
        void setmarca(string marcaS){
            marca = marcaS;
        }
        void setmodelo(string modeloS){
            modelo = modeloS;
        }
        void setano(int num){
            ano = num;
        }

        string getmarca(){
            return marca;
        }
        string getmodelo(){
            return modelo;
        }
        int getano(){
            return ano;
        }

        void exibirDetalhes(){
            cout << getmarca() << " " << getmodelo() << " " << getano() << endl;
        }
};

int main(){
    Carro Carro1;
    Carro1.setmarca("Ford");
    Carro1.setmodelo("Ka");
    Carro1.setano(1997);
    Carro1.exibirDetalhes();

    return 0;
}