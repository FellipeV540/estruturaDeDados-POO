#include <iostream>
using namespace std;

int main(){
    int Numeros, soma;
    soma = 0;
    for (int i = 0; i < 9; i++){
        cin >> Numeros;
        soma = soma + Numeros;
    }

    if(soma % 9 == 1){
        cout << "Dasher" << endl;//dasher
    }
    if(soma % 9 == 2){
        cout << "Dancer" << endl;//dancer
    }
    if(soma % 9 == 3){
        cout << "Prancer" << endl;//prancer
    }
    if(soma % 9 == 4){
        cout << "Vixen" << endl;//vixen
    }
    if(soma % 9 == 5){
        cout << "Comet" << endl;//comet
    }
    if(soma % 9 == 6){
        cout << "Cupid" << endl;//cupid
    }
    if(soma % 9 == 7){
        cout << "Donner" << endl;//donner
    }
    if(soma % 9 == 8){
        cout << "Blitzen" << endl;//blitzen
    }
    if(soma % 9 == 0){
        cout << "Rudolph" << endl;//Rudolph
    }

    return 0;
}