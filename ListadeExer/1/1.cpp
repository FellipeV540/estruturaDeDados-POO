#include <iostream>
using namespace std;

class Pessoa{
	public:
		string Nome;
		int Idade;
};

int main(){
	Pessoa Fellipe;
	Fellipe.Nome = "Fellipe";
	Fellipe.Idade = 18;

	cout << Fellipe.Nome << endl;
	cout << Fellipe.Idade << endl;

	return 0;
}
