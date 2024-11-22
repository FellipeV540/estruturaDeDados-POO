#include <iostream>
using namespace std;

class Aluno{
    private:
        string nome;
        int matricula;
        float nota;
    public:
        void setNome(string nomeS){
            nome = nomeS;
        }
        void setMatricula(int num){
            matricula = num;
        }
        void setNota(float num){
            nota = num;
        }

        string getNome(){
            return nome;
        }
        int getMatricula(){
            return matricula;
        }
        float getNota(){
            return nota;
        }

        void mostrarDados(){
            cout << getNome() << " " << getMatricula() << " " << getNota() << endl;
        }
};

int main(){
    Aluno Aluno1;
    Aluno1.setNome("Fellipe");
    Aluno1.setMatricula(10);
    Aluno1.setNota(8.7);
    Aluno1.mostrarDados();

    return 0;
}