#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int q = a / b;
    int r = a % b;

    if (r < 0) {
        r += abs(b);
        q -= (b > 0) ? 1 : -1;
    }

    cout << q << " " << r << endl;

    return 0;
}
