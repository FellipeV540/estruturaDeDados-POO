#include <iostream>
using namespace std;

class Produto{
    private:
        string nome;
        double preco;
        int quantidadeEstoque;

    public:
        void setNome(string nomeS){
            nome = nomeS;
        };
        void setPreco(double num){
            preco = num;
        };
        void setQuantidadeEstoque(int num){
            quantidadeEstoque = num;
        };

        string getNome() const{
            return nome;
        };
        double getPreco() const{
            return preco;
        };
        int getQuantidadeEstoque() const{
            return quantidadeEstoque;
        };

        void reporEstoque(int quantidade){
            quantidadeEstoque = quantidadeEstoque + quantidade;
        }
        void retirarEstoque(int quantidade){
            if (quantidadeEstoque >= quantidade){
                quantidadeEstoque = quantidadeEstoque - quantidade;
            }
            else {
                cout << "quantidade no estoque insuficiente" << endl;
            }
        }

};

int main(){
    Produto produto1;

    produto1.setNome("produto1");
    produto1.setPreco(10);
    produto1.setQuantidadeEstoque(100);

    cout << produto1.getNome() << endl;
    cout << produto1.getPreco() << endl;
    cout << produto1.getQuantidadeEstoque() << endl;

    produto1.reporEstoque(100);
    cout << produto1.getQuantidadeEstoque() << endl;
    produto1.retirarEstoque(201);
    cout << produto1.getQuantidadeEstoque() << endl;
    produto1.retirarEstoque(200);
    cout << produto1.getQuantidadeEstoque() << endl;

    return 0;
}