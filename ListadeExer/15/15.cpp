#include <iostream>
using namespace std;

class Funcionario{
    public:
        string nome;
        double salario;
        
        void setNome(string nomeS){
            nome = nomeS;
        }
        void setSalario(double num){
            salario = num;
        }

        string getNome(){
            return nome;
        }
        double getSalario(){
            return salario;
        }

        void aumentarSalario(double percentual){
            salario = salario * percentual;
        }
};

int main(){
    Funcionario func1;
    func1.setNome("Eu");
    func1.setCargo("Esse");
    func1.setSalario(100);

    cout << func1.getNome() << endl;
    cout << func1.getCargo() << endl;
    cout << func1.getSalario() << endl;

    func1.aumentarSalario(1.1);
    cout << func1.getSalario() << endl;

    return 0;
}