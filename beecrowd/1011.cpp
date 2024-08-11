#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double R;
    cin >> R;
    double pi = 3.14159;

    double VOLUME = (4.0 * pi * (R * R * R)) / 3.0;

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << VOLUME << endl;

    return 0;
}
