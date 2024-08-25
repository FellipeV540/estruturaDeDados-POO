#include <iostream>
using namespace std;
#include <iomanip>

int main(){
    int idade, soma = 0;
    double entradas = 0;
    cin >> idade;
    while (idade >= 0){
        soma = soma + idade;
        entradas = entradas + 1;
        cin >> idade;
    }
    cout << fixed << setprecision(2) << (soma/entradas) << endl;

    return 0;
}