#include <iostream>
using namespace std;

int main(){
    int V[100];
    for (int i = 0; i < 100; i++){
        cin >> V[i];
    }
    int maior = V[0], posicao;
    for (int j = 0; j < 100; j++){
        if (V[j] > maior){
            maior = V[j];
            posicao = j+1;
        }
    }
    cout << maior << endl;
    cout << posicao << endl;

    return 0;
}