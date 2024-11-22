#include <iostream>
using namespace std;

class Livro{
    public:
        string titulo;
        string autor;
        int lancamento;
        void info(){
            cout << titulo << " " << autor << " " << lancamento << endl;
        }
};

int main(){
    Livro livro1;
    livro1.titulo = "livro1";
    livro1.autor = "autor1";
    livro1.lancamento = 115;

    Livro livro2;
    livro2.titulo = "livro2";
    livro2.autor = "autor2";
    livro2.lancamento = 116;

    livro1.info();
    livro2.info();

    return 0;
}