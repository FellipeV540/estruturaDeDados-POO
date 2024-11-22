#include <iostream>
using namespace std;

class Animal{
public:
    string nome;
    void falar(){
        cout << "sons genericos" << endl;
    }
};
class Gato : public Animal{
    public:
        void falar(){
            cout << "Miau" << endl;
        }
};
class Cachorro : public Animal{
    public:
        void falar(){
            cout << "Au Au" << endl;
        }
};

int main(){
    Animal animal1;
    animal1.falar();
    Gato gato1;
    gato1.falar();
    Cachorro dog1;
    dog1.falar();

    return 0;
}