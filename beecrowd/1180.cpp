#include <iostream>
using namespace std;

int main() {
    int N, menor, pos;
    cin >> N;
    int X[N];
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }
    for (int j = 0; j < N; j++) {
        if (j == 0) {
            menor = X[j];
            pos = j;
        }
        else {
            if (X[j] < menor) {
                menor = X[j];
                pos = j;
            }
        }
    }
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;
    return 0;
}
