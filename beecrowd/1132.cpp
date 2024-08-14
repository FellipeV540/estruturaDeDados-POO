#include <iostream>
using namespace std;

int main() {
    int X, Y, total;
    cin >> X;
    cin >> Y;
    total = 0;

    int menor = min(X, Y);
    int maior = max(X, Y);

    for (int i = menor; i <= maior; i++) {
        if (i % 13 != 0) {
            total = total + i;
        }
        else if (i % 13 == 0) {
            continue;
        }
    }
    cout << total << endl;
    return 0;
}
