#include <iostream>
using namespace std;
#include <cmath>

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout.precision(4);
    cout << fixed << distancia << endl;

    return 0;
}
