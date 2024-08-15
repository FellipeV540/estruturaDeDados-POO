#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    char O;
    double M[12][12];

    cin >> O;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }

    double sum = 0.0;
    int count = 0;

    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            sum += M[i][j];
            count++;
        }
    }

    if (O == 'M') {
        sum /= count;
    }

    cout << fixed << setprecision(1) << sum << endl;

    return 0;
}
