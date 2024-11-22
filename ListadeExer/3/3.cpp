#include <iostream>
using namespace std;

class ContaBancaria{
    private:
        int numeroConta;
        double saldo;
        string titular;

    public:
        void setNumConta(int num){
            numeroConta = num;
        };
        void setSaldo(double num){
            saldo = num;
        };
        void setTitular(string nome){
            titular = nome;
        };

        int getNumConta() const{
            return numeroConta;
        };
        double getSaldo() const{
            return saldo;
        };
        string getTitular() const{
            return titular;
        };

        void depositar(double valor){
            saldo = saldo + valor;
        }
        void sacar(double valor){
            if (saldo >= valor){
                saldo = saldo - valor;
            }
            else {
                cout << "saldo insuficiente" << endl;
            }
        }

};

int main(){
    ContaBancaria conta1;

    conta1.setNumConta(1);
    conta1.setSaldo(100);
    conta1.setTitular("Fellipe");

    cout << conta1.getNumConta() << endl;
    cout << conta1.getSaldo() << endl;
    cout << conta1.getTitular() << endl;

    conta1.depositar(100);
    cout << conta1.getSaldo() << endl;
    conta1.sacar(201);
    cout << conta1.getSaldo() << endl;
    conta1.sacar(200);
    cout << conta1.getSaldo() << endl;

    return 0;
}