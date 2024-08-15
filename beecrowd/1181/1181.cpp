#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    int L;
    char T;
    double M[12][12];

    cin >> L >> T;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }

    double sum = 0.0;

    for (int j = 0; j < 12; j++) {
        sum += M[L][j];
    }

    if (T == 'M') {
        sum /= 12.0;
    }

    cout << fixed << setprecision(1) << sum << endl;

    return 0;
}
